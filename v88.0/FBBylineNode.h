/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBBylineNode <NSObject>
@property (assign,nonatomic,__weak) id<FBBylineNodeDelegate> bylineDelegate; 
@required
+(CGSize*)sizeWithViewModel:(id)arg1 metrics:(id)arg2 constrainedSize:(CGSize)arg3;
+(id)nodeWithViewModel:(id)arg1 metrics:(id)arg2 session:(id)arg3 layoutDirection:(long long)arg4;
+(Class)metricsClass;
-(void)setBylineDelegate:(id)arg1;
-(id<FBBylineNodeDelegate>)bylineDelegate;

@end

