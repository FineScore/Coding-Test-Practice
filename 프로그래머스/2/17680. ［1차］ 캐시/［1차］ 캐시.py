def solution(cacheSize, cities):
    execute_time = 0
    cache = []
    for c in cities:
        c = c.lower()
        if not c in cache:
            if len(cache) == cacheSize:
                if cacheSize == 0:
                    execute_time += 5
                else:
                    cache.pop(0)
                    cache.append(c)
                    execute_time += 5
            else:
                cache.append(c)
                execute_time += 5
        else:
            cache.pop(cache.index(c))
            cache.append(c)
            execute_time += 1

    return execute_time