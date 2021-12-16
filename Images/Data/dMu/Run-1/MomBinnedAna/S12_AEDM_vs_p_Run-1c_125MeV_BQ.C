void S12_AEDM_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  9 22:17:17 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(466.5837,-0.01473306,3003.847,0.1315822);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1062[22] = {
   367.0912,
   456.9775,
   570.3352,
   695.1607,
   816.036,
   938.5588,
   1062.792,
   1188.402,
   1312.659,
   1436.008,
   1561.944,
   1685.355,
   1810.634,
   1935.163,
   2060.286,
   2185.107,
   2309.111,
   2432.867,
   2559.582,
   2678.741,
   2780.764,
   2889.945};
   Double_t Graph0_fy1062[22] = {
   4.172212,
   0.2028948,
   0.07663446,
   0.06749733,
   0.01077513,
   0.02843078,
   0.02406191,
   0.05611486,
   0.07357964,
   0.04870883,
   0.04415346,
   0.05241113,
   0.05649242,
   0.05373599,
   0.04455908,
   0.01913971,
   0.06092335,
   0.0008231055,
   0.06946616,
   0.03139176,
   -0.000364612,
   0.179938};
   Double_t Graph0_fex1062[22] = {
   0.2307802,
   0.1107898,
   0.07402972,
   0.05028522,
   0.03996554,
   0.0359552,
   0.03405148,
   0.0329787,
   0.03328915,
   0.03339202,
   0.03587261,
   0.03762182,
   0.04222444,
   0.04610221,
   0.05261229,
   0.05817227,
   0.06684824,
   0.08026796,
   0.09667362,
   0.1106825,
   0.2199447,
   1.555816};
   Double_t Graph0_fey1062[22] = {
   1.738486,
   0.1631352,
   0.07934711,
   0.04728713,
   0.03239466,
   0.0264809,
   0.02320079,
   0.02097532,
   0.01966594,
   0.01854209,
   0.01855234,
   0.0178802,
   0.0184158,
   0.01851866,
   0.019262,
   0.01958902,
   0.02043447,
   0.02202662,
   0.02350561,
   0.02551703,
   0.06238228,
   0.6647822};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1062,Graph0_fy1062,Graph0_fex1062,Graph0_fey1062);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01062 = new TH1F("Graph_Graph01062","S12",100,114.3965,3143.964);
   Graph_Graph01062->SetMinimum(-0.0001015354);
   Graph_Graph01062->SetMaximum(0.1169507);
   Graph_Graph01062->SetDirectory(0);
   Graph_Graph01062->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01062->SetLineColor(ci);
   Graph_Graph01062->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01062->GetXaxis()->SetRange(21,87);
   Graph_Graph01062->GetXaxis()->CenterTitle(true);
   Graph_Graph01062->GetXaxis()->SetLabelFont(42);
   Graph_Graph01062->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01062->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01062->GetXaxis()->SetTitleFont(42);
   Graph_Graph01062->GetYaxis()->SetTitle("A_{EDM} [mrad] / 125 MeV");
   Graph_Graph01062->GetYaxis()->CenterTitle(true);
   Graph_Graph01062->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01062->GetYaxis()->SetLabelFont(42);
   Graph_Graph01062->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01062->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01062->GetYaxis()->SetTitleFont(42);
   Graph_Graph01062->GetZaxis()->SetLabelFont(42);
   Graph_Graph01062->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01062->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01062);
   
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
