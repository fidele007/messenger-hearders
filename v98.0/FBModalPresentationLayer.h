/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBTransparentView;


@protocol FBModalPresentationLayer <NSObject>
@property (nonatomic,readonly) FBTransparentView * overlayView; 
@property (nonatomic,readonly) FBTransparentView * contentView; 
@property (nonatomic,readonly) FBTransparentView * underlayView; 
@property (assign,nonatomic) CATransform3D backgroundTransform; 
@property (assign,nonatomic) unsigned long long presentationState; 
@required
-(FBTransparentView *)underlayView;
-(CATransform3D)backgroundTransform;
-(void)setBackgroundTransform:(CATransform3D)arg1;
-(FBTransparentView *)contentView;
-(FBTransparentView *)overlayView;
-(void)setPresentationState:(unsigned long long)arg1;
-(unsigned long long)presentationState;

@end
