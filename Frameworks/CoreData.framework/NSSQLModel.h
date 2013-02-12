/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSKnownKeysDictionary, NSManagedObjectModel, NSMutableArray, NSMutableDictionary, NSString;

@interface NSSQLModel : NSStoreMapping {
    NSMutableDictionary *_cachedFabricatedEntities;
    NSString *_configuration;
    NSMutableArray *_entities;
    NSKnownKeysDictionary *_entitiesByName;
    NSManagedObjectModel *_mom;
    BOOL _useBrokenHashing;
}

- (void)_addIndexedEntity:(id)arg1;
- (id)_entityMapping;
- (void)_generateModel:(id)arg1;
- (BOOL)_useBrokenHashing;
- (id)configurationName;
- (void)dealloc;
- (id)entities;
- (id)entityForID:(unsigned long)arg1;
- (unsigned long)entityIDForName:(id)arg1;
- (id)entityNamed:(id)arg1;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 useBrokenHashing:(BOOL)arg3;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2;
- (id)managedObjectModel;

@end