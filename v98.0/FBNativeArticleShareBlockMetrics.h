/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class PAInterfaceGuide, UIImage, UIColor;

@interface FBNativeArticleShareBlockMetrics : NSObject {

	PAInterfaceGuide* _interfaceGuide;

}

@property (nonatomic,readonly) double spaceBetweenShareIconAndShareText; 
@property (nonatomic,readonly) FBTextMetrics* textMetrics; 
@property (nonatomic,readonly) UIImage * shareIcon; 
@property (nonatomic,readonly) UIColor * borderColor; 
@property (nonatomic,readonly) double borderWidth; 
@property (nonatomic,readonly) UIColor * hightlightBackgroundColor; 
@property (nonatomic,readonly) double height; 
-(id)initWithInterfaceGuide:(id)arg1 ;
-(FBTextMetrics*)textMetrics;
-(double)spaceBetweenShareIconAndShareText;
-(UIColor *)hightlightBackgroundColor;
-(double)height;
-(UIColor *)borderColor;
-(double)borderWidth;
-(UIImage *)shareIcon;
@end
