/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <Messenger/FBConnectionPageProtocol.h>

@class NSArray, FBGraphQLConnectionStorePageInfo, NSDate, NSString;

@interface FBGraphQLConnectionStorePersistedPage : NSObject <NSCoding, FBConnectionPageProtocol> {

	NSArray* _edges;
	FBGraphQLConnectionStorePageInfo* _pageInfo;
	unsigned long long _pageType;
	NSDate* _timestamp;

}

@property (nonatomic,copy,readonly) NSArray * edges;                                     //@synthesize edges=_edges - In the implementation block
@property (nonatomic,readonly) FBGraphQLConnectionStorePageInfo * pageInfo;              //@synthesize pageInfo=_pageInfo - In the implementation block
@property (nonatomic,readonly) unsigned long long pageType;                              //@synthesize pageType=_pageType - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBGraphQLConnectionStorePageInfo *)pageInfo;
-(id)initWithEdges:(id)arg1 pageInfo:(id)arg2 pageType:(unsigned long long)arg3 timestamp:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)timestamp;
-(NSArray *)edges;
-(unsigned long long)pageType;
@end

