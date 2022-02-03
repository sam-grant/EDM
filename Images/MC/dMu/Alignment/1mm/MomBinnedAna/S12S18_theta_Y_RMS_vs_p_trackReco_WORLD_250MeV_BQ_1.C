void S12S18_theta_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:51:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.6841,-5.409679,3407.769,61.44258);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1174[11] = {
   451.7306,
   653.0293,
   880.2377,
   1123.173,
   1370.874,
   1619.772,
   1866.644,
   2114.45,
   2362.788,
   2613.838,
   2788.194};
   Double_t Graph0_fy1174[11] = {
   31.04035,
   25.71691,
   21.1865,
   17.95429,
   15.44639,
   13.272,
   11.39366,
   9.617416,
   7.951997,
   6.250401,
   4.911161};
   Double_t Graph0_fex1174[11] = {
   0.1368425,
   0.1165268,
   0.08467203,
   0.08307226,
   0.08894359,
   0.09893527,
   0.1159263,
   0.1464981,
   0.1927436,
   0.2339641,
   0.2969636};
   Double_t Graph0_fey1174[11] = {
   0.09094337,
   0.03071824,
   0.01774054,
   0.01463135,
   0.01350379,
   0.01292729,
   0.01302665,
   0.01388678,
   0.01511251,
   0.0148994,
   0.03447469};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1174,Graph0_fy1174,Graph0_fex1174,Graph0_fey1174);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01174 = new TH1F("Graph_Graph01174","S12S18_",100,217.904,3022.181);
   Graph_Graph01174->SetMinimum(1.275547);
   Graph_Graph01174->SetMaximum(54.75735);
   Graph_Graph01174->SetDirectory(0);
   Graph_Graph01174->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01174->SetLineColor(ci);
   Graph_Graph01174->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01174->GetXaxis()->SetRange(0,101);
   Graph_Graph01174->GetXaxis()->CenterTitle(true);
   Graph_Graph01174->GetXaxis()->SetLabelFont(42);
   Graph_Graph01174->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01174->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01174->GetXaxis()->SetTitleFont(42);
   Graph_Graph01174->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01174->GetYaxis()->CenterTitle(true);
   Graph_Graph01174->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01174->GetYaxis()->SetLabelFont(42);
   Graph_Graph01174->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01174->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01174->GetYaxis()->SetTitleFont(42);
   Graph_Graph01174->GetZaxis()->SetLabelFont(42);
   Graph_Graph01174->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01174->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01174);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
