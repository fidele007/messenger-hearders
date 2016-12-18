/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MQScriptModelProtocol <MQEventDispatcherProtocol>
@property (nonatomic,copy) NSString * scriptData; 
@property (nonatomic,copy) NSString * fileName; 
@property (assign,nonatomic) BOOL needsFaceTracker; 
@required
-(BOOL)needsFaceTracker;
-(void)setScriptData:(id)arg1;
-(NSString *)scriptData;
-(void)setNeedsFaceTracker:(BOOL)arg1;
-(NSString *)fileName;
-(void)setFileName:(id)arg1;

@end
