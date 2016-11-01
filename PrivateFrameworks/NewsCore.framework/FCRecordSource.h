/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCRecordSource : NSObject <FCCacheCoordinatorDelegate, FCCacheFlushing, FCFetchCoordinatorDelegate> {
    FCCacheCoordinator * _cacheCoordinator;
    FCCKDatabase * _contentDatabase;
    FCFetchCoordinator * _fetchCoordinator;
    FCThreadSafeMutableDictionary * _fetchErrorsByKey;
    FCKeyValueStore * _localStore;
}

@property (nonatomic, readonly) FCCacheCoordinator *cacheCoordinator;
@property (nonatomic, readonly) FCCKDatabase *contentDatabase;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *desiredKeys;
@property (nonatomic, readonly) FCFetchCoordinator *fetchCoordinator;
@property (nonatomic, readonly) FCThreadSafeMutableDictionary *fetchErrorsByKey;
@property (nonatomic, readonly) NSArray *genericKeys;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FCKeyValueStore *localStore;
@property (readonly) Class superclass;

+ (id)canaryRecordName;
+ (id)changeTagFromCKRecord:(id)arg1;
+ (unsigned long long)defaultFetchOperationCachePolicy;
+ (double)defaultFetchOperationMaximumCachedAge;
+ (unsigned long long)highThresholdDataSizeLimit;
+ (id)identifierFromCKRecord:(id)arg1;
+ (unsigned long long)lowThresholdDataSizeLimit;
+ (id)modificationDateFromCKRecord:(id)arg1;
+ (id)recordType;
+ (id)storeFilename;
+ (unsigned long long)storeVersion;
+ (bool)supportsDeletions;

- (void).cxx_destruct;
- (id)_ckRecordIDFromIdentifier:(id)arg1;
- (id)_desiredKeysForContentStoreFrontID:(id)arg1;
- (id)_desiredKeysWithCacheDictionary:(id)arg1;
- (id)_faultableRecordsWithIdentifiers:(id)arg1;
- (id)_fetchErrorForKey:(id)arg1;
- (id)_identifierFromCKRecordID:(id)arg1;
- (id)_localizedKeysByOriginalKeyForContentStoreFrontID:(id)arg1;
- (id)_localizedKeysByOriginalWithCacheDictionary:(id)arg1;
- (id)_recordBaseFromCKRecord:(id)arg1;
- (id)_saveCKRecordsWithWriteLock:(id)arg1 fetchContext:(id)arg2;
- (id)cacheCoordinator;
- (void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;
- (id)cachedRecordsWithIDs:(id)arg1;
- (id)contentDatabase;
- (id)desiredKeys;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (id)fetchCoordinator;
- (void)fetchCoordinator:(id)arg1 addFetchOperation:(id)arg2 context:(id)arg3;
- (id)fetchCoordinator:(id)arg1 fetchOperationForKeys:(id)arg2 context:(id)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5;
- (void)fetchCoordinator:(id)arg1 filterKeysToFetch:(id)arg2 context:(id)arg3;
- (id)fetchErrorsByKey;
- (id)fetchOperationForRecordsWithIDs:(id)arg1;
- (id)fetchOperationForRecordsWithIDs:(id)arg1 ignoreCacheForRecordIDs:(id)arg2;
- (id)genericKeys;
- (id)init;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2;
- (id)localStore;
- (id)localizableKeys;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)saveRecords:(id)arg1;

@end