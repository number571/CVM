#ifndef EXTCLIB_TYPE_HASHTAB_H_
#define EXTCLIB_TYPE_HASHTAB_H_

typedef struct hashtab_t hashtab_t;

extern hashtab_t *hashtab_new(int size);
extern void hashtab_free(hashtab_t *ht);

extern void *hashtab_select(hashtab_t *ht, char *key);
extern int hashtab_insert(hashtab_t *ht, char *key, void *elem, int size);
extern int hashtab_delete(hashtab_t *ht, char *key);

#endif /* EXTCLIB_TYPE_HASHTAB_H_ */
