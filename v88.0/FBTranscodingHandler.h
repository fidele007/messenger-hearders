/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBTranscodingHandler <NSObject>
@property (nonatomic,readonly) BOOL done; 
@property (nonatomic,readonly) SCD_Struct_FB20 presentationTime; 
@property (assign,nonatomic,__weak) id<FBTranscodingHandlerDelegate> delegate; 
@required
-(void)startTranscodingWhenReady;
-(void)setDelegate:(id)arg1;
-(id<FBTranscodingHandlerDelegate>)delegate;
-(BOOL)done;
-(SCD_Struct_FB20)presentationTime;

@end

