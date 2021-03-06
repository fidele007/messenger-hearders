/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKStatefulViewComponent.h>

@class NSString, FBUserSession;

@interface FBCollectionComponent : CKStatefulViewComponent {

	/*function pointer*/void* _sectionComponentProviderFunction;
	/*function pointer*/void* _componentContextFunction;
	NSString* _analyticsModule;
	FBUserSession* _session;
	FBCollectionComponentOptions _options;

}

@property (assign,nonatomic) /*function pointer*/void* sectionComponentProviderFunction;              //@synthesize sectionComponentProviderFunction=_sectionComponentProviderFunction - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* componentContextFunction;                      //@synthesize componentContextFunction=_componentContextFunction - In the implementation block
@property (nonatomic,copy) NSString * analyticsModule;                                                //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (assign,nonatomic) FBCollectionComponentOptions options;                                    //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                 //@synthesize session=_session - In the implementation block
+(id)newWithChildrenSectionComponent:(/*function pointer*/void*)arg1 context:(/*function pointer*/void*)arg2 analyticsModule:(id)arg3 options:(FBCollectionComponentOptions)arg4 session:(id)arg5 size:(const CKComponentSize*)arg6 ;
-(NSString *)analyticsModule;
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(/*function pointer*/void*)sectionComponentProviderFunction;
-(void)setSectionComponentProviderFunction:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)componentContextFunction;
-(void)setComponentContextFunction:(/*function pointer*/void*)arg1 ;
-(void)setOptions:(FBCollectionComponentOptions)arg1 ;
-(FBCollectionComponentOptions)options;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end

