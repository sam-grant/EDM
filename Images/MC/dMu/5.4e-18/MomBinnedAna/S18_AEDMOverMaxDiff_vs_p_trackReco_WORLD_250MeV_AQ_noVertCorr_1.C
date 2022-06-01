void S18_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_AQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:20:49 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.3085,-0.0005759413,3404.776,0.007118858);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1150[12] = {
   194.1149,
   428.653,
   630.9974,
   875.1308,
   1123.945,
   1373.169,
   1622.3,
   1870.684,
   2119.125,
   2366.648,
   2612.508,
   2825.031};
   Double_t Graph0_fy1150[12] = {
   0.003722009,
   0.0005796002,
   0.0006044584,
   0.0009240105,
   0.0008817797,
   0.0009147104,
   0.0008047309,
   0.0007503436,
   0.0006918325,
   0.0006871744,
   0.0005859017,
   0.0002903531};
   Double_t Graph0_fex1150[12] = {
   0.2346933,
   0.04102879,
   0.03179942,
   0.03058041,
   0.03110312,
   0.03213786,
   0.03384836,
   0.03676223,
   0.04140748,
   0.04888111,
   0.06195605,
   0.07860513};
   Double_t Graph0_fey1150[12] = {
   0.002069702,
   0.0002018097,
   9.560074e-05,
   7.512263e-05,
   6.461286e-05,
   5.724439e-05,
   5.214708e-05,
   4.908871e-05,
   4.777163e-05,
   4.827487e-05,
   5.102972e-05,
   7.531017e-05};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1150,Graph0_fy1150,Graph0_fex1150,Graph0_fey1150);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01150 = new TH1F("Graph_Graph01150","S18_",100,0,3088.232);
   Graph_Graph01150->SetMinimum(0.0001935387);
   Graph_Graph01150->SetMaximum(0.006349378);
   Graph_Graph01150->SetDirectory(0);
   Graph_Graph01150->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01150->SetLineColor(ci);
   Graph_Graph01150->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01150->GetXaxis()->SetRange(1,98);
   Graph_Graph01150->GetXaxis()->CenterTitle(true);
   Graph_Graph01150->GetXaxis()->SetLabelFont(42);
   Graph_Graph01150->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01150->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01150->GetXaxis()->SetTitleFont(42);
   Graph_Graph01150->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01150->GetYaxis()->CenterTitle(true);
   Graph_Graph01150->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01150->GetYaxis()->SetLabelFont(42);
   Graph_Graph01150->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01150->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01150->GetYaxis()->SetTitleFont(42);
   Graph_Graph01150->GetZaxis()->SetLabelFont(42);
   Graph_Graph01150->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01150->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01150);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
