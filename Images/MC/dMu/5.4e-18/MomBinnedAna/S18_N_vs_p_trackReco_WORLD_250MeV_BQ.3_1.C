void S18_N_vs_p_trackReco_WORLD_250MeV_BQ.3_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:35:05 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.0435,-751085.7,3406.904,1063238);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1140[11] = {
   452.1153,
   653.259,
   880.6386,
   1123.037,
   1370.835,
   1619.675,
   1866.351,
   2115.144,
   2363.223,
   2612.271,
   2787.59};
   Double_t Graph0_fy1140[11] = {
   54474,
   333736,
   690565,
   735400,
   637985,
   516257,
   370673,
   235168,
   137162,
   88382,
   9587};
   Double_t Graph0_fex1140[11] = {
   0.1417116,
   0.1193613,
   0.08608794,
   0.08398371,
   0.09008938,
   0.09988203,
   0.117661,
   0.148103,
   0.1939123,
   0.231913,
   0.2963084};
   Double_t Graph0_fey1140[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1140,Graph0_fy1140,Graph0_fex1140,Graph0_fey1140);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01140 = new TH1F("Graph_Graph01140","S18_",100,218.3822,3021.478);
   Graph_Graph01140->SetMinimum(-569653.3);
   Graph_Graph01140->SetMaximum(881806);
   Graph_Graph01140->SetDirectory(0);
   Graph_Graph01140->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01140->SetLineColor(ci);
   Graph_Graph01140->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01140->GetXaxis()->SetRange(0,101);
   Graph_Graph01140->GetXaxis()->CenterTitle(true);
   Graph_Graph01140->GetXaxis()->SetLabelFont(42);
   Graph_Graph01140->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01140->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01140->GetXaxis()->SetTitleFont(42);
   Graph_Graph01140->GetYaxis()->SetTitle("Positrons / 250 MeV");
   Graph_Graph01140->GetYaxis()->CenterTitle(true);
   Graph_Graph01140->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01140->GetYaxis()->SetLabelFont(42);
   Graph_Graph01140->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01140->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01140->GetYaxis()->SetTitleFont(42);
   Graph_Graph01140->GetZaxis()->SetLabelFont(42);
   Graph_Graph01140->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01140->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01140);
   
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
