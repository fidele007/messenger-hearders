/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIView;

@interface FBCollageItem : NSObject <NSCopying> {

	UIView* _view;
	CGRect _rect;

}

@property (nonatomic,readonly) UIView * view;              //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) CGRect rect;                //@synthesize rect=_rect - In the implementation block
+(id)collageItemWithRect:(CGRect)arg1 ;
-(id)initWithView:(id)arg1 rect:(CGRect)arg2 ;
-(CGRect)frameForXRatio:(double)arg1 yRatio:(double)arg2 ;
-(id)description;
-(UIView *)view;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)rect;
@end

