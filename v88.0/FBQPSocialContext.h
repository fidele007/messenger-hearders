/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBQPEntity.h>

@class NSArray, NSString;

@interface FBQPSocialContext : FBQPEntity {

	NSArray* _friendIDs;
	NSString* _text;

}

@property (nonatomic,copy) NSArray * friendIDs;              //@synthesize friendIDs=_friendIDs - In the implementation block
@property (nonatomic,copy) NSString * text;                  //@synthesize text=_text - In the implementation block
-(void)parseParameters:(id)arg1 ;
-(NSArray *)friendIDs;
-(id)_parseFriendIDs:(id)arg1 ;
-(void)setFriendIDs:(NSArray *)arg1 ;
-(BOOL)isValid;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
@end

