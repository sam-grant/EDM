void S12_AEDM_vs_p_noBr_aQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 30 08:24:31 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-9.607893,3378.375,3.507541);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1134[30] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450,
   2550,
   2650,
   2750,
   2850,
   2950};
   Double_t Graph0_fy1134[30] = {
   -5.846684,
   -0.9286312,
   0.9391711,
   -0.01597883,
   0.0478632,
   0.04720134,
   0.1409416,
   0.2390269,
   0.2613486,
   0.1536724,
   0.1512382,
   0.1381812,
   0.1038422,
   0.2199506,
   0.1996634,
   0.1837091,
   0.173976,
   0.1191935,
   0.1647369,
   0.106329,
   0.1240742,
   0.1343781,
   0.1584404,
   0.1219029,
   0.09279127,
   0.09923467,
   0.1329685,
   0.1076428,
   0.06905105,
   -0.0542154};
   Double_t Graph0_fex1134[30] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph0_fey1134[30] = {
   1.575303,
   0.8212355,
   0.3824641,
   0.1354002,
   0.07650489,
   0.0584744,
   0.05094135,
   0.04654988,
   0.0431113,
   0.04027827,
   0.03796747,
   0.03609951,
   0.03433312,
   0.03274525,
   0.03134886,
   0.0302348,
   0.02923959,
   0.02841445,
   0.02776218,
   0.02730433,
   0.02696591,
   0.02686555,
   0.02675376,
   0.02682064,
   0.02699577,
   0.02748022,
   0.02809065,
   0.02918507,
   0.03329703,
   0.07751001};
   TGraphErrors *gre = new TGraphErrors(30,Graph0_fx1134,Graph0_fy1134,Graph0_fex1134,Graph0_fey1134);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01134 = new TH1F("Graph_Graph01134","S12",100,0,3300);
   Graph_Graph01134->SetMinimum(-8.29635);
   Graph_Graph01134->SetMaximum(2.195997);
   Graph_Graph01134->SetDirectory(0);
   Graph_Graph01134->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01134->SetLineColor(ci);
   Graph_Graph01134->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01134->GetXaxis()->SetRange(1,91);
   Graph_Graph01134->GetXaxis()->CenterTitle(true);
   Graph_Graph01134->GetXaxis()->SetLabelFont(42);
   Graph_Graph01134->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01134->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01134->GetXaxis()->SetTitleFont(42);
   Graph_Graph01134->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01134->GetYaxis()->CenterTitle(true);
   Graph_Graph01134->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01134->GetYaxis()->SetLabelFont(42);
   Graph_Graph01134->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01134->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01134->GetYaxis()->SetTitleFont(42);
   Graph_Graph01134->GetZaxis()->SetLabelFont(42);
   Graph_Graph01134->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01134->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01134);
   
   gre->Draw("ap");
   
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
