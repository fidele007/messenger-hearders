/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBCompositeSectionComponent.h>

@protocol FBGraphQLConnectionChangesetMapper;
@class FBGraphQLConnectionSectionComponentListenerAnnouncer, FBGraphQLConnectionSectionComponentConfiguration, FBSectionComponentToolbox, FBGraphQLConnectionSectionComponentState, FBGraphQLConnectionChangesetSequenceService, FBGraphQLConnectionSectionComponentUpdateListenerAnnouncer, FBGraphQLConnectionControllerState;

@interface FBGraphQLConnectionSectionComponent : FBCompositeSectionComponent {

	BOOL _shouldDeferUpdatesToParent;
	BOOL _shouldCollapseSequencePeriodically;
	FBGraphQLConnectionSectionComponentListenerAnnouncer* _graphQLConnectionAnnouncer;
	FBGraphQLConnectionSectionComponentConfiguration* _configuration;
	FBSectionComponentToolbox* _toolbox;
	/*^block*/id _componentProvider;
	FBGraphQLConnectionSectionComponentState* _state;
	id<FBGraphQLConnectionChangesetMapper> _changesetMapper;
	id _componentContext;
	FBGraphQLConnectionChangesetSequenceService* _connectionService;
	FBGraphQLConnectionSectionComponentUpdateListenerAnnouncer* _updateAnnouncer;

}

@property (nonatomic,readonly) FBGraphQLConnectionSectionComponentConfiguration * configuration;                               //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) FBSectionComponentToolbox * toolbox;                                                            //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,copy,readonly) id componentProvider;                                                                      //@synthesize componentProvider=_componentProvider - In the implementation block
@property (nonatomic,readonly) FBGraphQLConnectionSectionComponentState * state;                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) id<FBGraphQLConnectionChangesetMapper> changesetMapper;                                         //@synthesize changesetMapper=_changesetMapper - In the implementation block
@property (nonatomic,readonly) BOOL shouldDeferUpdatesToParent;                                                                //@synthesize shouldDeferUpdatesToParent=_shouldDeferUpdatesToParent - In the implementation block
@property (nonatomic,readonly) id componentContext;                                                                            //@synthesize componentContext=_componentContext - In the implementation block
@property (nonatomic,readonly) BOOL shouldCollapseSequencePeriodically;                                                        //@synthesize shouldCollapseSequencePeriodically=_shouldCollapseSequencePeriodically - In the implementation block
@property (nonatomic,readonly) FBGraphQLConnectionChangesetSequenceService * connectionService;                                //@synthesize connectionService=_connectionService - In the implementation block
@property (nonatomic,readonly) FBGraphQLConnectionSectionComponentUpdateListenerAnnouncer * updateAnnouncer;                   //@synthesize updateAnnouncer=_updateAnnouncer - In the implementation block
@property (nonatomic,readonly) FBGraphQLConnectionControllerState * graphQLConnectionControllerState; 
@property (nonatomic,readonly) FBGraphQLConnectionSectionComponentListenerAnnouncer * graphQLConnectionAnnouncer;              //@synthesize graphQLConnectionAnnouncer=_graphQLConnectionAnnouncer - In the implementation block
+(id)newWithConfiguration:(id)arg1 toolbox:(id)arg2 componentContext:(id)arg3 componentGenerator:(const FBSectionComponentGenerator*)arg4 shouldDeferUpdatesToParent:(BOOL)arg5 ;
+(id)newWithConfiguration:(id)arg1 toolbox:(id)arg2 componentContext:(id)arg3 componentProviderBlock:(/*^block*/id)arg4 changesetMapper:(id)arg5 shouldDeferUpdatesToParent:(BOOL)arg6 shouldCollapseSequencePeriodically:(BOOL)arg7 ;
+(id)newWithConfiguration:(id)arg1 toolbox:(id)arg2 componentContext:(id)arg3 componentProviderBlock:(/*^block*/id)arg4 changesetMapper:(id)arg5 ;
+(id)newWithConfiguration:(id)arg1 toolbox:(id)arg2 componentContext:(id)arg3 componentGenerator:(const FBSectionComponentGenerator*)arg4 ;
+(id)newWithConfiguration:(id)arg1 toolbox:(id)arg2 componentContext:(id)arg3 changesetMapper:(id)arg4 ;
+(id)newWithConfiguration:(id)arg1 toolbox:(id)arg2 componentContext:(id)arg3 componentProviderBlock:(/*^block*/id)arg4 ;
+(id)newWithConfiguration:(id)arg1 toolbox:(id)arg2 componentContext:(id)arg3 componentProviderBlock:(/*^block*/id)arg4 shouldCollapseSequencePeriodically:(BOOL)arg5 ;
-(FBSectionComponentToolbox *)toolbox;
-(id)componentContext;
-(FBGraphQLConnectionSectionComponentUpdateListenerAnnouncer *)updateAnnouncer;
-(FBGraphQLConnectionSectionComponentListenerAnnouncer *)graphQLConnectionAnnouncer;
-(FBGraphQLConnectionControllerState *)graphQLConnectionControllerState;
-(void)applyEdgePredicate:(/*^block*/id)arg1 deletionReason:(id)arg2 ;
-(id<FBGraphQLConnectionChangesetMapper>)changesetMapper;
-(BOOL)shouldDeferUpdatesToParent;
-(BOOL)shouldCollapseSequencePeriodically;
-(FBGraphQLConnectionChangesetSequenceService *)connectionService;
-(id)componentProvider;
-(FBGraphQLConnectionSectionComponentState *)state;
-(FBGraphQLConnectionSectionComponentConfiguration *)configuration;
@end

