void S12_Y_RMS_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:46:38 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.3119,8.798996,3036.371,21.23359);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1066[22] = {
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
   Double_t Graph0_fy1066[22] = {
   13.85571,
   13.59586,
   13.01586,
   12.7301,
   12.73096,
   12.72574,
   12.70094,
   12.6863,
   12.67812,
   12.6526,
   12.66117,
   12.66331,
   12.65771,
   12.64707,
   12.61086,
   12.58005,
   12.55286,
   12.58812,
   12.59384,
   12.76193,
   13.33094,
   19.40193};
   Double_t Graph0_fex1066[22] = {
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
   Double_t Graph0_fey1066[22] = {
   0.5045953,
   0.04947514,
   0.02704276,
   0.01791871,
   0.01407529,
   0.01253837,
   0.01190945,
   0.01150723,
   0.01149551,
   0.01162032,
   0.01239231,
   0.01307013,
   0.01455321,
   0.01594364,
   0.01802984,
   0.01991108,
   0.02283086,
   0.02744967,
   0.03280535,
   0.04046739,
   0.1137943,
   3.327403};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1066,Graph0_fy1066,Graph0_fex1066,Graph0_fey1066);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01066 = new TH1F("Graph_Graph01066","S12",100,114.0569,3142.362);
   Graph_Graph01066->SetMinimum(10.04246);
   Graph_Graph01066->SetMaximum(19.99013);
   Graph_Graph01066->SetDirectory(0);
   Graph_Graph01066->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01066->SetLineColor(ci);
   Graph_Graph01066->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01066->GetXaxis()->SetRange(21,88);
   Graph_Graph01066->GetXaxis()->CenterTitle(true);
   Graph_Graph01066->GetXaxis()->SetLabelFont(42);
   Graph_Graph01066->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01066->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01066->GetXaxis()->SetTitleFont(42);
   Graph_Graph01066->GetYaxis()->SetTitle("#sigma_{y} [mm] / 125 MeV");
   Graph_Graph01066->GetYaxis()->CenterTitle(true);
   Graph_Graph01066->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01066->GetYaxis()->SetLabelFont(42);
   Graph_Graph01066->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01066->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01066->GetYaxis()->SetTitleFont(42);
   Graph_Graph01066->GetZaxis()->SetLabelFont(42);
   Graph_Graph01066->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01066->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01066);
   
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
