/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface FBStorylineMovieSuggestion : FBValueObject <NSCopying> {

	NSArray* _fbAssets;
	NSString* _title;

}

@property (nonatomic,copy,readonly) NSArray * fbAssets;              //@synthesize fbAssets=_fbAssets - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                //@synthesize title=_title - In the implementation block
-(NSArray *)fbAssets;
-(id)initWithFbAssets:(id)arg1 title:(id)arg2 ;
-(NSString *)title;
@end

