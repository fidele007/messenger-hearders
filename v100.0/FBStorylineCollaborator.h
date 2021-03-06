/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBStorylineCollaborator : FBValueObject <NSCopying, NSCoding> {

	NSString* _fbId;
	NSString* _name;
	NSString* _shortName;
	NSString* _profilePicURI;

}

@property (nonatomic,copy,readonly) NSString * fbId;                       //@synthesize fbId=_fbId - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortName;                  //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,copy,readonly) NSString * profilePicURI;              //@synthesize profilePicURI=_profilePicURI - In the implementation block
-(NSString *)fbId;
-(id)initWithFbId:(id)arg1 name:(id)arg2 shortName:(id)arg3 profilePicURI:(id)arg4 ;
-(NSString *)profilePicURI;
-(NSString *)name;
-(NSString *)shortName;
@end

