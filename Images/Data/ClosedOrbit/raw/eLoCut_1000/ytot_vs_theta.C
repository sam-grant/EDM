void ytot_vs_theta()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 13 17:08:19 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-49.3125,-0.2089933,443.8125,0.2960974);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1005[24] = {
   15,
   30,
   45,
   60,
   75,
   90,
   105,
   120,
   135,
   150,
   165,
   180,
   195,
   210,
   225,
   240,
   255,
   270,
   285,
   300,
   315,
   330,
   345,
   360};
   Double_t Graph0_fy1005[24] = {
   0.03880821,
   0.04941772,
   0.05239703,
   0.02308576,
   0.01703826,
   -0.06655018,
   -0.06738783,
   0.03933832,
   0.03715554,
   -0.001583566,
   0.09922807,
   -0.0008910952,
   -0.05601131,
   0.1120125,
   0.01814724,
   0.1342731,
   0.03730845,
   0.1458303,
   0.05108668,
   0.07513231,
   0.05939078,
   0.1573387,
   0.04985619,
   -0.02940945};
   Double_t Graph0_fex1005[24] = {
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
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1005[24] = {
   0.05427776,
   0.05458553,
   0.05471837,
   0.05493962,
   0.05288183,
   0.05551954,
   0.05742366,
   0.05673201,
   0.05611961,
   0.05707779,
   0.05409617,
   0.05474219,
   0.05108713,
   0.05424395,
   0.05322722,
   0.05589736,
   0.05648077,
   0.05462298,
   0.0528016,
   0.05650658,
   0.05488957,
   0.05457688,
   0.05396993,
   0.05688277};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1005,Graph0_fy1005,Graph0_fex1005,Graph0_fey1005);
   gre->SetName("Graph0");
   gre->SetTitle("Low energy threshold: 1000 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01005 = new TH1F("Graph_Graph01005","Low energy threshold: 1000 MeV",100,0,394.5);
   Graph_Graph01005->SetMinimum(-0.1584842);
   Graph_Graph01005->SetMaximum(0.2455883);
   Graph_Graph01005->SetDirectory(0);
   Graph_Graph01005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01005->SetLineColor(ci);
   Graph_Graph01005->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01005->GetXaxis()->CenterTitle(true);
   Graph_Graph01005->GetXaxis()->SetLabelFont(42);
   Graph_Graph01005->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01005->GetXaxis()->SetTitleFont(42);
   Graph_Graph01005->GetYaxis()->SetTitle("y [mm]");
   Graph_Graph01005->GetYaxis()->CenterTitle(true);
   Graph_Graph01005->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01005->GetYaxis()->SetLabelFont(42);
   Graph_Graph01005->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01005->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01005->GetYaxis()->SetTitleFont(42);
   Graph_Graph01005->GetZaxis()->SetLabelFont(42);
   Graph_Graph01005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01005);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.2067085,0.9341608,0.7932915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Low energy threshold: 1000 MeV");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
