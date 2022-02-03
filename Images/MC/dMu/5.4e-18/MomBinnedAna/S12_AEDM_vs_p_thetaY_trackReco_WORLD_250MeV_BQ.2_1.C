void S12_AEDM_vs_p_thetaY_trackReco_WORLD_250MeV_BQ.2_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:34:00 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.7352,-0.2530836,3407.155,0.7652275);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1095[11] = {
   451.6049,
   653.2425,
   880.2476,
   1123.096,
   1371.206,
   1620.243,
   1866.857,
   2114.96,
   2362.593,
   2614.235,
   2787.651};
   Double_t Graph0_fy1095[11] = {
   0.2216698,
   0.100615,
   0.1675261,
   0.1493444,
   0.134181,
   0.1334593,
   0.1380866,
   0.1119629,
   0.06290832,
   0.07825632,
   0.001728355};
   Double_t Graph0_fex1095[11] = {
   0.15967,
   0.1343891,
   0.09726887,
   0.09508309,
   0.1012556,
   0.1119375,
   0.1303914,
   0.1631604,
   0.21262,
   0.2621876,
   0.3235261};
   Double_t Graph0_fey1095[11] = {
   0.211532,
   0.07108366,
   0.04085201,
   0.03360026,
   0.0307071,
   0.02916684,
   0.02932713,
   0.03102564,
   0.03318192,
   0.03315067,
   0.07599908};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1095,Graph0_fy1095,Graph0_fex1095,Graph0_fey1095);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01095 = new TH1F("Graph_Graph01095","S12_",100,217.7923,3021.628);
   Graph_Graph01095->SetMinimum(-0.1512525);
   Graph_Graph01095->SetMaximum(0.6633964);
   Graph_Graph01095->SetDirectory(0);
   Graph_Graph01095->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01095->SetLineColor(ci);
   Graph_Graph01095->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01095->GetXaxis()->SetRange(0,101);
   Graph_Graph01095->GetXaxis()->CenterTitle(true);
   Graph_Graph01095->GetXaxis()->SetLabelFont(42);
   Graph_Graph01095->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01095->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01095->GetXaxis()->SetTitleFont(42);
   Graph_Graph01095->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01095->GetYaxis()->CenterTitle(true);
   Graph_Graph01095->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01095->GetYaxis()->SetLabelFont(42);
   Graph_Graph01095->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01095->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01095->GetYaxis()->SetTitleFont(42);
   Graph_Graph01095->GetZaxis()->SetLabelFont(42);
   Graph_Graph01095->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01095);
   
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
