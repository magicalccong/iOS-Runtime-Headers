/* Generated by RuntimeBrowser.
 */

@protocol AXUIAlertStyleProvider <NSObject>

@required

- (struct CGSize { float x1; float x2; })alertBackgroundSizeForType:(unsigned int)arg1;
- (int)alertBackgroundStyleForType:(unsigned int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alertContentEdgeInsetsForType:(unsigned int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alertEdgeInsetsForType:(unsigned int)arg1;
- (double)alertFadeAnimationDurationForType:(unsigned int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alertIconImageEdgeInsetsForType:(unsigned int)arg1;
- (int)alertPositionForType:(unsigned int)arg1;
- (BOOL)alertShouldGrowInAxis:(int)arg1 forType:(unsigned int)arg2;
- (UIColor *)alertSubtitleTextColorForType:(unsigned int)arg1;
- (UIFont *)alertSubtitleTextFontForType:(unsigned int)arg1;
- (float)alertSubtitleTextLineHeightOffsetForType:(unsigned int)arg1;
- (float)alertSubtitleTextVerticalSpacingHeightWithTextForType:(unsigned int)arg1;
- (UIColor *)alertTextColorForType:(unsigned int)arg1;
- (UIFont *)alertTextFontForType:(unsigned int)arg1;
- (float)alertTextLineHeightOffsetForType:(unsigned int)arg1;

@optional

- (float)alertBackgroundCornerRadiusForType:(unsigned int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alertBackgroundImageCapInsetsForType:(unsigned int)arg1;
- (UIImage *)alertBackgroundImageForType:(unsigned int)arg1;

@end
