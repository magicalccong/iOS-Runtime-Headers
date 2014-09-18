/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSIndexSet;

@interface ABLEDataHygiene : NSObject {
    unsigned long long _length;
    id _predicate;
    NSIndexSet *_validIndexSet;
}

@property unsigned long long length;
@property(readonly) id predicate;
@property(retain) NSIndexSet * validIndexSet;

+ (id)hygieneNaN;

- (void).cxx_destruct;
- (id)checkArray:(id)arg1;
- (id)initWithHygieneTest:(id)arg1;
- (unsigned long long)length;
- (id)predicate;
- (void)setLength:(unsigned long long)arg1;
- (void)setValidIndexSet:(id)arg1;
- (id)validIndexSet;

@end