/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBSimpleSearchTaggingProviderProtocol <FBAvatarTaggingSearchProviderProtocol>
@property (nonatomic,copy) NSString * authorType; 
@required
-(BOOL)shouldCreateTaggableUserCollectionForTargetType:(id)arg1;
-(void)searchForAvatarsWithText:(id)arg1 fetchLimit:(unsigned long long)arg2 flags:(unsigned long long)arg3 explicitMention:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 errorHandler:(/*^block*/id)arg6;
-(NSString *)authorType;
-(void)setAuthorType:(id)arg1;

@end

