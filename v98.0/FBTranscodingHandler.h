/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBTranscodingHandler <NSObject>
@property (nonatomic,readonly) BOOL done; 
@property (nonatomic,readonly) SCD_Struct_FB25 presentationTime; 
@property (assign,nonatomic,__weak) id<FBTranscodingHandlerDelegate> delegate; 
@required
-(void)startTranscodingWhenReady;
-(void)setDelegate:(id)arg1;
-(id<FBTranscodingHandlerDelegate>)delegate;
-(BOOL)done;
-(SCD_Struct_FB25)presentationTime;

@end
