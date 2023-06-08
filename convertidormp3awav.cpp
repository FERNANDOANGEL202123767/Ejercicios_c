#include <iostream>
#include <mpg123.h>
#include <sndfile.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " yam.mp3 yamyam.wav" << std::endl;
        return 1;
    }

    const char *input_filename = argv[1];
    const char *output_filename = argv[2];

    mpg123_init();
    mpg123_handle *mh = mpg123_new(NULL, NULL);
    if (mpg123_open(mh, input_filename) != MPG123_OK) {
        std::cerr << "Failed to open input file: " << input_filename << std::endl;
        return 1;
    }

    int channels, encoding;
    long rate;
    mpg123_getformat(mh, &rate, &channels, &encoding);

    SF_INFO sf_info;
    sf_info.channels = channels;
    sf_info.samplerate = rate;
    sf_info.format = SF_FORMAT_WAV | SF_FORMAT_PCM_16;

    SNDFILE *sndfile = sf_open(output_filename, SFM_WRITE, &sf_info);
    if (sndfile == NULL) {
        std::cerr << "Failed to open output file: " << output_filename << std::endl;
        return 1;
    }

    const int buffer_size = 4096;
    unsigned char buffer[buffer_size];
    size_t bytes_read;  // Cambiar de int a size_t

    do {
        if (mpg123_read(mh, buffer, buffer_size, &bytes_read) == MPG123_OK) {  // Actualizar la llamada a mpg123_read()
            sf_write_raw(sndfile, buffer, bytes_read);
        } else {
            break;
        }
    } while (bytes_read > 0);

    mpg123_close(mh);
    mpg123_delete(mh);
    mpg123_exit();

    sf_close(sndfile);

    return 0;
}