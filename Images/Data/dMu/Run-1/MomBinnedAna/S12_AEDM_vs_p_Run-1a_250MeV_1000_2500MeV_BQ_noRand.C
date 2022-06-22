void S12_AEDM_vs_p_Run-1a_250MeV_1000_2500MeV_BQ_noRand()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun  9 16:42:18 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.1892,-0.007725726,2705.706,0.121065);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1040[11] = {
   455.9264,
   656.34,
   884.4537,
   1127.968,
   1373.739,
   1620.41,
   1867.284,
   2116.316,
   2359.815,
   2607.712,
   2783.425};
   Double_t Graph0_fy1040[11] = {
   0.3371234,
   0.0462947,
   0.09378253,
   0.03696104,
   0.04739963,
   0.06210462,
   0.006018688,
   0.04479983,
   0.01445592,
   0.01255504,
   0.001205818};
   Double_t Graph0_fex1040[11] = {
   0.1349203,
   0.09296607,
   0.06087477,
   0.05497387,
   0.05336317,
   0.05856621,
   0.07024862,
   0.08794796,
   0.1135069,
   0.1586199,
   0.2651908};
   Double_t Graph0_fey1040[11] = {
   0.1905975,
   0.04761068,
   0.0238391,
   0.01798225,
   0.01543867,
   0.01469457,
   0.01483809,
   0.01558741,
   0.01694186,
   0.01960646,
   0.07207196};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1040,Graph0_fy1040,Graph0_fex1040,Graph0_fey1040);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01040 = new TH1F("Graph_Graph01040","S12",100,223.0016,3016.481);
   Graph_Graph01040->SetMinimum(0.005153351);
   Graph_Graph01040->SetMaximum(0.108186);
   Graph_Graph01040->SetDirectory(0);
   Graph_Graph01040->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01040->SetLineColor(ci);
   Graph_Graph01040->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01040->GetXaxis()->SetRange(28,82);
   Graph_Graph01040->GetXaxis()->CenterTitle(true);
   Graph_Graph01040->GetXaxis()->SetLabelFont(42);
   Graph_Graph01040->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01040->GetXaxis()->SetTitleFont(42);
   Graph_Graph01040->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01040->GetYaxis()->CenterTitle(true);
   Graph_Graph01040->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01040->GetYaxis()->SetLabelFont(42);
   Graph_Graph01040->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01040->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01040->GetYaxis()->SetTitleFont(42);
   Graph_Graph01040->GetZaxis()->SetLabelFont(42);
   Graph_Graph01040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01040);
   
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
