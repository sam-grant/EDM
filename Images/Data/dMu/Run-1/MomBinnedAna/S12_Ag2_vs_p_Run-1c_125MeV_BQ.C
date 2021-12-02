void S12_Ag2_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:14:38 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8277,-0.0469703,2731.307,0.1032099);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1019[22] = {
   367.0259,
   456.9861,
   570.3033,
   695.1491,
   816.0438,
   938.5662,
   1062.777,
   1188.406,
   1312.66,
   1436.011,
   1561.94,
   1685.36,
   1810.626,
   1935.175,
   2060.29,
   2185.097,
   2309.115,
   2432.874,
   2559.589,
   2678.766,
   2780.784,
   2890.136};
   Double_t Graph0_fy1019[22] = {
   -0.9881925,
   0.1072483,
   0.03890573,
   0.0832301,
   0.007077579,
   0.04723543,
   0.0129738,
   0.0224926,
   0.01208317,
   -0.0006475022,
   0.00593183,
   -0.03705405,
   0.004833506,
   0.007564649,
   -0.01833493,
   -0.02862798,
   0.007851775,
   0.01835081,
   0.02539937,
   0.01004445,
   0.03211981,
   0.9683911};
   Double_t Graph0_fex1019[22] = {
   0.22722,
   0.1087091,
   0.07270613,
   0.04936012,
   0.03923618,
   0.03530122,
   0.03342569,
   0.03237394,
   0.03268045,
   0.03278089,
   0.03521736,
   0.03693347,
   0.04144578,
   0.04526516,
   0.05166049,
   0.0571106,
   0.06562328,
   0.0787792,
   0.09490435,
   0.1086824,
   0.2160954,
   1.498282};
   Double_t Graph0_fey1019[22] = {
   1.708463,
   0.1592254,
   0.07747756,
   0.04615116,
   0.03164653,
   0.02591217,
   0.02270223,
   0.02051153,
   0.01920041,
   0.01810993,
   0.01816082,
   0.01753384,
   0.01808747,
   0.01827803,
   0.01915506,
   0.01955137,
   0.02057044,
   0.02258502,
   0.02443019,
   0.02721307,
   0.06876612,
   0.5290307};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1019,Graph0_fy1019,Graph0_fex1019,Graph0_fey1019);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01019 = new TH1F("Graph_Graph01019","S12",100,114.3151,3144.118);
   Graph_Graph01019->SetMinimum(-0.03195228);
   Graph_Graph01019->SetMaximum(0.0881919);
   Graph_Graph01019->SetDirectory(0);
   Graph_Graph01019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01019->SetLineColor(ci);
   Graph_Graph01019->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01019->GetXaxis()->SetRange(21,79);
   Graph_Graph01019->GetXaxis()->CenterTitle(true);
   Graph_Graph01019->GetXaxis()->SetLabelFont(42);
   Graph_Graph01019->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01019->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01019->GetXaxis()->SetTitleFont(42);
   Graph_Graph01019->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01019->GetYaxis()->CenterTitle(true);
   Graph_Graph01019->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01019->GetYaxis()->SetLabelFont(42);
   Graph_Graph01019->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01019->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01019->GetYaxis()->SetTitleFont(42);
   Graph_Graph01019->GetZaxis()->SetLabelFont(42);
   Graph_Graph01019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01019);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
