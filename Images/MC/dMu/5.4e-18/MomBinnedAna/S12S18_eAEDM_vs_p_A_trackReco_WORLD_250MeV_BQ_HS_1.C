void S12S18_eAEDM_vs_p_A_trackReco_WORLD_250MeV_BQ_HS_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb  1 16:31:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.1445,-3.644257e-06,3406.661,3.290927e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1179[11] = {
   451.9321,
   653.3151,
   880.441,
   1123.088,
   1370.959,
   1620.001,
   1866.599,
   2114.953,
   2362.908,
   2613.197,
   2787.495};
   Double_t Graph0_fy1179[11] = {
   6.714713e-07,
   4.484875e-08,
   1.517971e-08,
   1.385411e-08,
   1.710047e-08,
   2.302002e-08,
   3.699738e-08,
   7.129929e-08,
   1.554773e-07,
   2.920812e-07,
   7.21059e-06};
   Double_t Graph0_fex1179[11] = {
   0.08422585,
   0.07114437,
   0.05140669,
   0.05018896,
   0.05365579,
   0.05937024,
   0.06960067,
   0.08736012,
   0.1143839,
   0.1387502,
   0.1730443};
   Double_t Graph0_fey1179[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1179,Graph0_fy1179,Graph0_fex1179,Graph0_fey1179);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01179 = new TH1F("Graph_Graph01179","S12S18_",100,218.2659,3021.25);
   Graph_Graph01179->SetMinimum(1.109678e-08);
   Graph_Graph01179->SetMaximum(2.925392e-05);
   Graph_Graph01179->SetDirectory(0);
   Graph_Graph01179->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01179->SetLineColor(ci);
   Graph_Graph01179->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01179->GetXaxis()->SetRange(0,101);
   Graph_Graph01179->GetXaxis()->CenterTitle(true);
   Graph_Graph01179->GetXaxis()->SetLabelFont(42);
   Graph_Graph01179->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01179->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01179->GetXaxis()->SetTitleFont(42);
   Graph_Graph01179->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01179->GetYaxis()->CenterTitle(true);
   Graph_Graph01179->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01179->GetYaxis()->SetLabelFont(42);
   Graph_Graph01179->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01179->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01179->GetYaxis()->SetTitleFont(42);
   Graph_Graph01179->GetZaxis()->SetLabelFont(42);
   Graph_Graph01179->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01179->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01179);
   
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
