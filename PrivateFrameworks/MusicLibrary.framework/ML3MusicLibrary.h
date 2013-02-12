/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3Container, ML3DatabaseMetadata, ML3MusicLibrary_SQLiteDatabaseContext, ML3NondurableWriteSet, ML3UbiquitousDatabase, NSArray, NSMutableArray, NSString;

@interface ML3MusicLibrary : NSObject {
    int _artworkBlobFD;
    struct dispatch_queue_s { } *_artworkQueue;
    ML3MusicLibrary_SQLiteDatabaseContext *_backgroundDatabaseContext;
    struct dispatch_queue_s { } *_backgroundQueue;
    struct _opaque_pthread_t { long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[596]; } *_backgroundQueueOwner;
    int _backupDisabledCount;
    BOOL _backupNeeded;
    NSString *_displayValuesNotifyName;
    int _displayValuesNotifyToken;
    BOOL _enableWrites;
    BOOL _hasEverConnectedToDatabase;
    ML3MusicLibrary_SQLiteDatabaseContext *_mainDatabaseContext;
    id _mcSettingsObserver;
    NSString *_nonContentsNotifyName;
    int _nonContentsNotifyToken;
    struct dispatch_queue_s { } *_nondurableConcurrentQueue;
    ML3NondurableWriteSet *_nondurableWriteSet;
    NSString *_notifyName;
    int _notifyToken;
    NSString *_path;
    NSMutableArray *_pendingNotifyPostNames;
    BOOL _requiresProcessAssertion;
    NSString *_syncGenerationNotifyName;
    int _syncGenerationNotifyToken;
    ML3UbiquitousDatabase *_ubiquitousDatabase;
}

@property(readonly) long long autoFilledTracksTotalSize;
@property(readonly) long long currentRevision;
@property(readonly) ML3DatabaseMetadata * databaseInfo;
@property(readonly) BOOL hasEverConnectedToDatabase;
@property(readonly) NSArray * localizedSectionIndexTitles;
@property(readonly) BOOL mediaRestrictionEnabled;
@property(getter=isNondurableWritingActive,readonly) BOOL nondurableWritingActive;
@property(readonly) NSString * path;
@property(readonly) long long persistentID;
@property(readonly) NSArray * preferredAudioTracks;
@property(readonly) NSArray * preferredSubtitleTracks;
@property(readonly) ML3Container * purchasedTracksPlaylist;
@property(readonly) BOOL requiresPostProcessing;
@property long long syncGenerationID;
@property(readonly) BOOL writable;

+ (id)_autoFillTrackPredicate;
+ (struct sqlite3 { }*)_openedDatabaseHandleForPath:(id)arg1 enableWrites:(BOOL)arg2 forLibrary:(id)arg3;
+ (void)_stepStatement:(struct sqlite3_stmt { }*)arg1 hasRow:(BOOL*)arg2 didFinish:(BOOL*)arg3;
+ (id)allSchemaSQL;
+ (struct MLArtworkFormatSpec { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; int x6; })artworkFormatSpecForArtworkFormatID:(unsigned int)arg1;
+ (void)buildDatabaseFromHomeSharingConnection:(id)arg1 atPath:(id)arg2 completionHandler:(id)arg3 progressHandler:(id)arg4;
+ (void)buildDatabaseFromHomeSharingConnection:(id)arg1 atPath:(id)arg2 completionHandler:(id)arg3;
+ (BOOL)buildDatabaseTablesUsingHandle:(struct sqlite3 { }*)arg1 usingTransaction:(BOOL)arg2;
+ (void)closeDatabaseHandle:(struct sqlite3 { }*)arg1;
+ (BOOL)createIndexesUsingHandle:(struct sqlite3 { }*)arg1;
+ (int)currentUserVersion;
+ (BOOL)dropIndexesUsingHandle:(struct sqlite3 { }*)arg1 tableNames:(const char *)arg2;
+ (BOOL)dropIndexesUsingHandle:(struct sqlite3 { }*)arg1;
+ (void)enumerateSortMapTablesUsingBlock:(id)arg1;
+ (BOOL)executeSQL:(id)arg1 usingHandle:(struct sqlite3 { }*)arg2 waitIfBusy:(BOOL)arg3;
+ (BOOL)executeSQL:(id)arg1 usingHandle:(struct sqlite3 { }*)arg2;
+ (BOOL)importationEnabled;
+ (id)indexSchemaSQL;
+ (void)initialize;
+ (id)itemIndexSchemaSQL;
+ (id)itemSchemaSQL;
+ (id)localizedSectionHeaderForSectionHeader:(id)arg1;
+ (id)localizedSectionIndexTitleForSectionHeader:(id)arg1;
+ (id)mainDatabasePath;
+ (BOOL)migrateToCurrentUserVersionUsingHandle:(struct sqlite3 { }*)arg1;
+ (struct sqlite3 { }*)openedDatabaseHandleForPath:(id)arg1 enableWrites:(BOOL)arg2;
+ (BOOL)orderingLanguageMatchesSystemUsingHandle:(struct sqlite3 { }*)arg1;
+ (unsigned int)readableArtworkFormatIDForArtworkFormatID:(unsigned int)arg1;
+ (BOOL)schemaExactlyMatchesSystemUsingHandle:(struct sqlite3 { }*)arg1;
+ (id)sectionIndexTitleForSectionHeader:(id)arg1;
+ (id)sectionIndexTitles;
+ (void)setImportationEnabled:(BOOL)arg1;
+ (id)sharedLibrary;
+ (id)sortMapSchemaSQL;
+ (BOOL)statementDidFinishAfterStepping:(struct sqlite3_stmt { }*)arg1;
+ (BOOL)statementHasRowAfterStepping:(struct sqlite3_stmt { }*)arg1;
+ (id)storeLinkSchemaSQL;
+ (id)systemCurrentLanguage;
+ (BOOL)updateSortMapOnHandle:(struct sqlite3 { }*)arg1 usingTransaction:(BOOL)arg2;
+ (BOOL)userVersionMatchesSystemUsingHandle:(struct sqlite3 { }*)arg1;
+ (int)userVersionUsingHandle:(struct sqlite3 { }*)arg1;

- (void)_accessAccountCacheDBForSQL:(id)arg1 usingBlock:(id)arg2;
- (void)_accessArtworkBlobFDWithBlock:(id)arg1;
- (void)_accessDatabaseContextUsingBlock:(id)arg1;
- (BOOL)_commitNondurableWrites;
- (void)_delayableNotifyPost:(id)arg1;
- (void)_dispatchBackgroundAsynchronouslyUsingBlock:(id)arg1;
- (void)_dispatchBackgroundSynchronouslyUsingBlock:(id)arg1;
- (BOOL)_insertImageBytes:(const void*)arg1 length:(unsigned long)arg2 forCacheID:(id)arg3 formatID:(unsigned int)arg4 imageSubRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5;
- (id)_insertStringsIntoSortMapOrFail:(id)arg1;
- (BOOL)_mustProcessLanguageChange;
- (void)_onBackgroundQueuePerformBlock:(id)arg1;
- (void)_postChangeNotificationAndScheduleFlushLocalOnly:(BOOL)arg1;
- (void)_postDisplayValuesChangeNotificationLocalOnly:(BOOL)arg1;
- (void)_postNonContentsChangeNotificationAndScheduleFlushLocalOnly:(BOOL)arg1;
- (void)_scheduleCommitNondurableWritesAfterTimeInterval:(double)arg1;
- (void)accessDatabaseUsingBlock:(id)arg1;
- (void)accessSortKeyBuilder:(id)arg1;
- (long long)addStringToSortMap:(id)arg1;
- (id)albumArtistForEffectiveAlbumArtistName:(id)arg1;
- (id)albumForAlbumArtistPersistentID:(long long)arg1 albumName:(id)arg2 feedURL:(id)arg3 seasonNumber:(id)arg4 compilation:(BOOL)arg5;
- (id)appleIDForDSID:(unsigned long long)arg1;
- (void)applyUbiquitousBookmarksToTrack:(id)arg1;
- (id)artistForArtistName:(id)arg1 seriesName:(id)arg2;
- (long long)autoFilledTracksTotalSize;
- (id)backgroundQueue_backgroundDatabaseContext;
- (BOOL)buildDatabaseTables;
- (void)checkForChangesOnConnection:(id)arg1 completionHandler:(id)arg2;
- (BOOL)coerceValidDatabase;
- (BOOL)compactArtwork;
- (id)composerForComposerName:(id)arg1;
- (BOOL)createIndexes;
- (long long)currentRevision;
- (id)databaseInfo;
- (void)dealloc;
- (BOOL)deleteAllArtwork;
- (BOOL)deleteAndRecreateDatabaseUsingHandle:(struct sqlite3 {}**)arg1;
- (BOOL)deleteArtworkForCacheID:(id)arg1;
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1;
- (BOOL)dropItemIndexes;
- (void)enumeratePersistentIDsAfterRevision:(long long)arg1 usingBlock:(id)arg2;
- (BOOL)executeSQL:(id)arg1;
- (void)fillContainerForHomeSharingConnection:(id)arg1 containerID:(long long)arg2 completionHandler:(id)arg3;
- (id)genreForGenre:(id)arg1;
- (id)groupingKeyForString:(id)arg1;
- (BOOL)hasArtworkForCacheID:(id)arg1;
- (BOOL)hasEverConnectedToDatabase;
- (void)incrementalVaccuumIfAppropriate;
- (id)initWithPath:(id)arg1 enableWrites:(BOOL)arg2;
- (BOOL)insertArtworkWithImageData:(id)arg1 forCacheID:(id)arg2;
- (long long)insertStringIntoSortMapNoTransaction:(id)arg1;
- (id)insertStringsIntoSortMap:(id)arg1;
- (BOOL)isNondurableWritingActive;
- (BOOL)isReadable;
- (void)loadArtworkForCacheID:(id)arg1 formatID:(unsigned int)arg2 completionHandler:(id)arg3;
- (id)localizedSectionHeaderForSectionIndex:(unsigned int)arg1;
- (id)localizedSectionIndexTitles;
- (id)locationKindForKind:(id)arg1;
- (id)mainDatabaseContext;
- (BOOL)mediaRestrictionEnabled;
- (void)migratePresignedValidity;
- (struct { long long x1; int x2; })nameOrderForString:(id)arg1;
- (id)nondurableWriteSetForReading;
- (id)nondurableWriteSetForWriting;
- (void)notifyContentsDidChange;
- (void)notifyDisplayValuesPropertyDidChange;
- (void)notifyNonContentsPropertyDidChange;
- (struct sqlite3 { }*)openedDatabaseHandle;
- (id)path;
- (void)performTransactionAllowingWrites:(BOOL)arg1 withBlock:(id)arg2;
- (void)performTransactionKind:(int)arg1 waitIfBusy:(BOOL)arg2 withBlock:(id)arg3;
- (void)performTransactionKind:(int)arg1 withBlock:(id)arg2;
- (void)performTransactionWithBlock:(id)arg1;
- (long long)persistentID;
- (BOOL)populateArtworkCacheWithArtworkData:(id)arg1 trackValues:(id)arg2;
- (BOOL)populateStaticItemsOfDynamicContainers;
- (id)preferredAudioTracks;
- (id)preferredSubtitleTracks;
- (void)prepareStatementForSQL:(id)arg1 cache:(BOOL)arg2 usingBlock:(id)arg3;
- (void)prepareStatementForSQL:(id)arg1 usingBlock:(id)arg2;
- (void)prepareStatementForSQLPrefix:(id)arg1 inPersistentIDs:(const long long*)arg2 count:(unsigned int)arg3 usingBlock:(id)arg4;
- (id)purchasedTracksPlaylist;
- (void)reconnectBackgroundDatabaseContext;
- (void)reconnectMainDatabaseContext;
- (void)reconnectToDatabase;
- (void)removeOrphanedTracks;
- (BOOL)requiresPostProcessing;
- (BOOL)resetAllContents;
- (void)savePlaylists;
- (void)savePlaylistsSinceRevision:(long long)arg1 withGrappaID:(unsigned int)arg2;
- (void)saveTrackMetadata;
- (void)saveTrackMetadataSinceRevision:(long long)arg1 withGrappaID:(unsigned int)arg2;
- (unsigned int)sectionIndexTitleIndexForSectionIndex:(unsigned int)arg1;
- (BOOL)setAppleID:(id)arg1 forDSID:(unsigned long long)arg2;
- (void)setSyncGenerationID:(long long)arg1;
- (BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (long long)syncGenerationID;
- (double)timestampForAppliedUbiquitousBookmarkKey:(id)arg1;
- (id)ubiquitousDatabase;
- (BOOL)updateActivePlaylistNamesForCurrentLanguage;
- (void)updateOrderingLanguagesForCurrentLanguage;
- (BOOL)updateSortMap;
- (void)updateTrackIntegrity;
- (void)updateUbiquitousBookmarksFromTrack:(id)arg1;
- (void)updateUbiquitousBookmarksWithKey:(id)arg1 bookmarkTime:(id)arg2 timestamp:(double)arg3;
- (id)valueForDatabaseProperty:(id)arg1;
- (BOOL)writable;

@end