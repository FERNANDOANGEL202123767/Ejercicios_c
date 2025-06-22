#include <iostream>
#include <chrono>
#include <curl/curl.h>

using namespace std;

int main()
{
    // Medir latencia de una petición HTTP
    const char *url = "https://www.google.com";
    CURL *curl = curl_easy_init();
    if (curl)
    {
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        curl_easy_setopt(curl, CURLOPT_NOSIGNAL, 1L);
        curl_easy_setopt(curl, CURLOPT_TIMEOUT_MS, 1000L);
        curl_easy_perform(curl);
        curl_easy_cleanup(curl);
    }

    // Medir tiempo de ejecución de un comando con perf
    auto start = chrono::high_resolution_clock::now();

    string command = "perf stat -e cache-misses brave";
    system(command.c_str());

    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);

    cout << "Tiempo transcurrido: " << duration.count() / 1000000.0 << " segundos" << endl;

    return 0;
}