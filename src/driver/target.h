/*
 * This file is part of cparser.
 * Copyright (C) 2014 Matthias Braun <matze@braunis.de>
 */
#ifndef TARGET_H
#define TARGET_H

#include <stdbool.h>

#include "machine_triple.h"
#include "options.h"

bool target_setup(void);
void warn_experimental_target(void);

void target_adjust_types_and_dialect(void);

typedef struct codegen_option_t codegen_option_t;

struct codegen_option_t {
	codegen_option_t *next;
	char              option[];
};

extern codegen_option_t  *codegen_options;
extern codegen_option_t **codegen_options_anchor;
extern char               firm_isa[16];
extern bool               profile_generate;
extern bool               profile_use;
extern const char        *multilib_directory_target_triple;

#endif
