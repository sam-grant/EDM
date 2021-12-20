void S12_theta_Y_RMS_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec 17 14:46:22 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(466.5837,0.6891317,3003.847,32.70954);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1065[22] = {
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
   Double_t Graph0_fy1065[22] = {
   35.20386,
   31.2866,
   26.71226,
   23.38627,
   20.42598,
   18.76282,
   17.28798,
   16.11775,
   15.0772,
   14.04705,
   13.1786,
   12.03605,
   11.10724,
   10.18839,
   9.350411,
   8.549098,
   7.764682,
   6.96256,
   6.17257,
   5.492423,
   4.9901,
   4.757616};
   Double_t Graph0_fex1065[22] = {
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
   Double_t Graph0_fey1065[22] = {
   0.9163198,
   0.08128721,
   0.0395311,
   0.02354588,
   0.0161409,
   0.01320846,
   0.01157646,
   0.01046668,
   0.009805905,
   0.009246599,
   0.00925943,
   0.008928109,
   0.009190093,
   0.009249357,
   0.009634,
   0.009775679,
   0.01019718,
   0.01099699,
   0.01171922,
   0.01270292,
   0.0312382,
   0.5253908};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1065,Graph0_fy1065,Graph0_fex1065,Graph0_fey1065);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01065 = new TH1F("Graph_Graph01065","S12",100,114.3965,3143.964);
   Graph_Graph01065->SetMinimum(3.891172);
   Graph_Graph01065->SetMaximum(29.50749);
   Graph_Graph01065->SetDirectory(0);
   Graph_Graph01065->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01065->SetLineColor(ci);
   Graph_Graph01065->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01065->GetXaxis()->SetRange(21,87);
   Graph_Graph01065->GetXaxis()->CenterTitle(true);
   Graph_Graph01065->GetXaxis()->SetLabelFont(42);
   Graph_Graph01065->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01065->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01065->GetXaxis()->SetTitleFont(42);
   Graph_Graph01065->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 125 MeV");
   Graph_Graph01065->GetYaxis()->CenterTitle(true);
   Graph_Graph01065->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01065->GetYaxis()->SetLabelFont(42);
   Graph_Graph01065->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01065->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01065->GetYaxis()->SetTitleFont(42);
   Graph_Graph01065->GetZaxis()->SetLabelFont(42);
   Graph_Graph01065->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01065);
   
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
