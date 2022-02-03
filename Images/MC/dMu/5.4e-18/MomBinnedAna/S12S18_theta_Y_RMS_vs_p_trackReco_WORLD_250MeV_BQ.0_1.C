void S12S18_theta_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ.0_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:32:11 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.314,-5.272193,3406.951,60.66702);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1174[11] = {
   451.9422,
   653.2273,
   880.2966,
   1123.19,
   1371.008,
   1619.961,
   1866.763,
   2115.03,
   2362.81,
   2613.821,
   2787.502};
   Double_t Graph0_fy1174[11] = {
   30.91675,
   25.75858,
   21.20559,
   17.93636,
   15.40926,
   13.23217,
   11.38354,
   9.599972,
   7.946501,
   6.241588,
   4.926637};
   Double_t Graph0_fex1174[11] = {
   0.1840185,
   0.154634,
   0.1118548,
   0.1091122,
   0.1164788,
   0.1292152,
   0.1512967,
   0.189677,
   0.2474458,
   0.3009601,
   0.3776506};
   Double_t Graph0_fey1174[11] = {
   0.1212319,
   0.04088242,
   0.02342454,
   0.01919844,
   0.01764825,
   0.01683114,
   0.01697599,
   0.01796199,
   0.01940504,
   0.01910324,
   0.04448351};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1174,Graph0_fy1174,Graph0_fex1174,Graph0_fey1174);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01174 = new TH1F("Graph_Graph01174","S12S18_",100,218.146,3021.491);
   Graph_Graph01174->SetMinimum(1.321729);
   Graph_Graph01174->SetMaximum(54.0731);
   Graph_Graph01174->SetDirectory(0);
   Graph_Graph01174->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01174->SetLineColor(ci);
   Graph_Graph01174->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01174->GetXaxis()->SetRange(0,101);
   Graph_Graph01174->GetXaxis()->CenterTitle(true);
   Graph_Graph01174->GetXaxis()->SetLabelFont(42);
   Graph_Graph01174->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01174->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01174->GetXaxis()->SetTitleFont(42);
   Graph_Graph01174->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01174->GetYaxis()->CenterTitle(true);
   Graph_Graph01174->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01174->GetYaxis()->SetLabelFont(42);
   Graph_Graph01174->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01174->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01174->GetYaxis()->SetTitleFont(42);
   Graph_Graph01174->GetZaxis()->SetLabelFont(42);
   Graph_Graph01174->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01174->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01174);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
