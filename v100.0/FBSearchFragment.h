/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBSearchFragment : NSObject <NSCopying> {

	BOOL _isMatched;
	NSString* _text;
	NSString* _fbid;
	NSString* _entityType;

}

@property (nonatomic,readonly) NSString * text;                    //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * fbid;                    //@synthesize fbid=_fbid - In the implementation block
@property (nonatomic,readonly) NSString * entityType;              //@synthesize entityType=_entityType - In the implementation block
@property (assign,nonatomic) BOOL isMatched;                       //@synthesize isMatched=_isMatched - In the implementation block
-(NSString *)fbid;
-(id)initWithText:(id)arg1 fbid:(id)arg2 entityType:(id)arg3 ;
-(id)initWithText:(id)arg1 fbid:(id)arg2 entityType:(id)arg3 isMatched:(BOOL)arg4 ;
-(id)initWithText:(id)arg1 isMatched:(BOOL)arg2 ;
-(BOOL)isMatched;
-(void)setIsMatched:(BOOL)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(id)initWithText:(id)arg1 ;
-(NSString *)entityType;
@end

