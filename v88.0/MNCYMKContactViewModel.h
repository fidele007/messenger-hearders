/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface MNCYMKContactViewModel : FBValueObject <NSCopying> {

	BOOL _isCYMKHidden;
	BOOL _isOnViewerContactList;
	NSString* _userId;
	NSString* _name;
	NSDate* _dateAdded;

}

@property (nonatomic,copy,readonly) NSString * userId;                  //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL isCYMKHidden;                       //@synthesize isCYMKHidden=_isCYMKHidden - In the implementation block
@property (nonatomic,readonly) BOOL isOnViewerContactList;              //@synthesize isOnViewerContactList=_isOnViewerContactList - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateAdded;                 //@synthesize dateAdded=_dateAdded - In the implementation block
-(BOOL)isOnViewerContactList;
-(id)initWithUserId:(id)arg1 name:(id)arg2 isCYMKHidden:(BOOL)arg3 isOnViewerContactList:(BOOL)arg4 dateAdded:(id)arg5 ;
-(BOOL)isCYMKHidden;
-(NSString *)name;
-(NSDate *)dateAdded;
-(NSString *)userId;
@end

