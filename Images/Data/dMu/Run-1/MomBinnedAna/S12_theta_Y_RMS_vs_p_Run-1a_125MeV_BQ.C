void S12_theta_Y_RMS_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:46:38 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.3119,0.8302788,3036.371,32.73367);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1065[22] = {
   366.7569,
   456.7845,
   570.5961,
   695.294,
   816.0224,
   938.5594,
   1062.71,
   1188.407,
   1312.759,
   1435.945,
   1561.838,
   1685.363,
   1810.678,
   1935.178,
   2060.185,
   2185.067,
   2309.271,
   2432.901,
   2559.509,
   2678.794,
   2781.468,
   2888.259};
   Double_t Graph0_fy1065[22] = {
   35.46497,
   31.43148,
   26.73713,
   23.41146,
   20.45314,
   18.77702,
   17.34357,
   16.14357,
   15.08291,
   14.08896,
   13.1915,
   12.04043,
   11.14128,
   10.19281,
   9.361496,
   8.537902,
   7.771293,
   6.977093,
   6.183594,
   5.511808,
   5.024365,
   5.041977};
   Double_t Graph0_fex1065[22] = {
   0.3413438,
   0.1561468,
   0.1041606,
   0.07012624,
   0.05597749,
   0.05036428,
   0.04766168,
   0.04604846,
   0.04638155,
   0.04659361,
   0.04991836,
   0.05234856,
   0.05873927,
   0.06410553,
   0.07310149,
   0.08066811,
   0.09262888,
   0.1106361,
   0.132593,
   0.152446,
   0.3094867,
   1.744149};
   Double_t Graph0_fey1065[22] = {
   1.291558,
   0.1143894,
   0.05555114,
   0.03295369,
   0.02261221,
   0.0185001,
   0.01626225,
   0.01464268,
   0.01367575,
   0.01293923,
   0.01291118,
   0.01242709,
   0.01280963,
   0.01284957,
   0.01338417,
   0.0135133,
   0.01413411,
   0.01521426,
   0.01610737,
   0.01747677,
   0.042876,
   0.864692};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1065,Graph0_fy1065,Graph0_fex1065,Graph0_fey1065);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01065 = new TH1F("Graph_Graph01065","S12",100,114.0569,3142.362);
   Graph_Graph01065->SetMinimum(4.020618);
   Graph_Graph01065->SetMaximum(29.54333);
   Graph_Graph01065->SetDirectory(0);
   Graph_Graph01065->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01065->SetLineColor(ci);
   Graph_Graph01065->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01065->GetXaxis()->SetRange(21,88);
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
