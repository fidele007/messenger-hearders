/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FNFAVPlayerLayer <NSObject>
@property (nonatomic,retain) id<FNFAVPlayer> player; 
@property (getter=isReadyForDisplay,nonatomic,readonly) BOOL readyForDisplay; 
@property (nonatomic,copy) NSString * videoGravity; 
@required
-(NSString *)videoGravity;
-(void)setPlayer:(id)arg1;
-(id<FNFAVPlayer>)player;
-(BOOL)isReadyForDisplay;
-(void)setVideoGravity:(id)arg1;

@end

