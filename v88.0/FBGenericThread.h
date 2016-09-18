/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray, FBMImageUrlCollection;


@protocol FBGenericThread <FBConversationContact>
@property (nonatomic,copy,readonly) NSString * genericThreadFbId; 
@property (nonatomic,readonly) NSArray * genericThreadParticipants; 
@property (nonatomic,readonly) BOOL genericThreadHasCustomName; 
@property (nonatomic,copy,readonly) NSString * genericThreadPicHash; 
@property (nonatomic,copy,readonly) FBMImageUrlCollection * imageUrls; 
@required
-(NSString *)genericThreadFbId;
-(BOOL)genericThreadHasCustomName;
-(NSString *)genericThreadPicHash;
-(NSArray *)genericThreadParticipants;
-(FBMImageUrlCollection *)imageUrls;

@end

