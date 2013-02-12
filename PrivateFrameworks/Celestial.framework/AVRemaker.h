/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDictionary;

@interface AVRemaker : NSObject {
    struct AVRemakerPrivate { struct OpaqueFigRemaker {} *x1; BOOL x2; id x3; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x4; inout unsigned short x5; void*x6; void*x7; unsigned long x8; void*x9; id x10; void*x11; inout unsigned short x12; void*x13; void*x14; unsigned long x15; void*x16; id x17; void*x18; inout unsigned short x19; unsigned short x20; void*x21; const NSInteger x22; in void*x23; void*x24; NSDictionary *x25; } *_priv;
}

@property(readonly) double maxDurationWithinLimits;
@property(readonly) double progress;
@property(readonly) double sourceDuration;

+ (id)figRemakerNotificationNames;
+ (double)maximumDurationWithinLimitsForMode:(id)arg1 options:(id)arg2;
+ (id)settingForMode:(id)arg1;

- (void)addListeners;
- (struct CGSize { float x1; float x2; })calculateDimensionsOfMovieURL:(id)arg1;
- (void)cancel;
- (struct OpaqueFigRemaker { }*)createFigRemaker;
- (void)dealloc;
- (id)fileFormatForURL:(id)arg1;
- (id)initWithSource:(id)arg1 dest:(id)arg2 mode:(id)arg3 options:(id)arg4;
- (double)maxDurationWithinLimits;
- (double)progress;
- (void)removeListeners;
- (void)setRangeStartTime:(double)arg1 endTime:(double)arg2;
- (double)sourceDuration;
- (id)start;

@end