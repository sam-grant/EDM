void S12_AEDM_vs_p_trackReco_AAR_125MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 08:59:32 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-18.578,2727,70.98236);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1022[22] = {
   312,
   437,
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687,
   2812,
   2937};
   Double_t Graph0_fy1022[22] = {
   54.86891,
   -0.4628595,
   0.3796184,
   0.005146658,
   -0.06862808,
   0.0860255,
   0.106311,
   0.06263774,
   0.02251105,
   -0.1392865,
   -0.02913071,
   -0.09309449,
   -0.0236335,
   0.1399472,
   0.1417186,
   -0.05384958,
   0.005513143,
   0.06831162,
   -0.1746587,
   0.01540525,
   0.1803169,
   -0.978712};
   Double_t Graph0_fex1022[22] = {
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
   Double_t Graph0_fey1022[22] = {
   1.186724,
   0.4873108,
   0.3085929,
   0.1868693,
   0.1432321,
   0.1213508,
   0.11126,
   0.1039536,
   0.09973923,
   0.09627812,
   0.09408336,
   0.09249136,
   0.09264314,
   0.09371028,
   0.09689434,
   0.1008081,
   0.1030701,
   0.1064286,
   0.1040214,
   0.1014066,
   0.1700266,
   2.672556};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1022,Graph0_fy1022,Graph0_fex1022,Graph0_fey1022);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01022 = new TH1F("Graph_Graph01022","S12_",100,49.5,3199.5);
   Graph_Graph01022->SetMinimum(-9.621959);
   Graph_Graph01022->SetMaximum(62.02633);
   Graph_Graph01022->SetDirectory(0);
   Graph_Graph01022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01022->SetLineColor(ci);
   Graph_Graph01022->GetXaxis()->SetTitle("p [MeV]: in range p #minus 62 < p < p #plus 62 MeV");
   Graph_Graph01022->GetXaxis()->SetRange(23,78);
   Graph_Graph01022->GetXaxis()->CenterTitle(true);
   Graph_Graph01022->GetXaxis()->SetLabelFont(42);
   Graph_Graph01022->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01022->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01022->GetXaxis()->SetTitleFont(42);
   Graph_Graph01022->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01022->GetYaxis()->CenterTitle(true);
   Graph_Graph01022->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01022->GetYaxis()->SetLabelFont(42);
   Graph_Graph01022->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01022->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01022->GetYaxis()->SetTitleFont(42);
   Graph_Graph01022->GetZaxis()->SetLabelFont(42);
   Graph_Graph01022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01022);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
