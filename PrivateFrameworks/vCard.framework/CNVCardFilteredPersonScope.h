/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardFilteredPersonScope : NSObject {
    NSSet * _blacklist;
    unsigned int  _filterOptions;
}

@property (readonly) NSSet *blacklist;
@property (readonly) unsigned int filterOptions;

- (void).cxx_destruct;
- (id)blacklist;
- (unsigned int)filterOptions;
- (id)initWithBlacklist:(id)arg1 options:(unsigned int)arg2;
- (BOOL)isEmpty;

@end