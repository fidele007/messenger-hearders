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

@class FBCommentsModelControllerConfiguration, FBMemComment;

@interface FBOfflineCommentsCacheObject : FBValueObject <NSCopying, NSCoding> {

	FBCommentsModelControllerConfiguration* _commentsModelControllerConfiguration;
	FBMemComment* _comment;

}

@property (nonatomic,copy,readonly) FBCommentsModelControllerConfiguration * commentsModelControllerConfiguration;              //@synthesize commentsModelControllerConfiguration=_commentsModelControllerConfiguration - In the implementation block
@property (nonatomic,copy,readonly) FBMemComment * comment;                                                                     //@synthesize comment=_comment - In the implementation block
-(id)initWithCommentsModelControllerConfiguration:(id)arg1 comment:(id)arg2 ;
-(FBCommentsModelControllerConfiguration *)commentsModelControllerConfiguration;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(FBMemComment *)comment;
@end

