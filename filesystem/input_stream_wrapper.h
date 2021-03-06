// Copyright 2002-2004 Frozenbyte Ltd.

#ifndef INCLUDED_FILESYSTEM_INPUT_STREAM_WRAPPER_H
#define INCLUDED_FILESYSTEM_INPUT_STREAM_WRAPPER_H

#include <stdlib.h>

namespace frozenbyte {
    namespace filesystem {
        struct FB_FILE;

        /** Open @p filename, if @p options contains the character 'o' no warning will be printed if file is not found */
        FB_FILE *fb_fopen(const char *filename, const char * options);
        size_t fb_fread(void *buffer, size_t size, size_t count, FB_FILE *stream);
        size_t fb_fsize(FB_FILE *stream);
        int fb_fclose(FB_FILE *stream);
        int fb_feof(FB_FILE *stream);

    } // filesystem
}     // frozenbyte

#endif
