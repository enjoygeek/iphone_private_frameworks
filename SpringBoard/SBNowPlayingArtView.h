/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>
#import <Availability2.h>

#if __IPHONE_OS_VERSION_MAX_ALLOWED < __IPHONE_3_2

@class UIImageView;

@interface SBNowPlayingArtView : UIView {
	UIImageView* _imageView;
	UIView* _reflection;
}
// inherited: -(void)dealloc;
-(void)setAlbumArtImage:(id)image maxSize:(float)size;
-(id)albumArtImage;
-(void)setReflectionVisible:(BOOL)visible withDuration:(float)duration;
@end

#endif