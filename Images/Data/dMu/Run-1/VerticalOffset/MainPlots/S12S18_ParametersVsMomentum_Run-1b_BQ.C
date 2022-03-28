void S12S18_ParametersVsMomentum_Run-1b_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Mar 27 15:09:48 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-70.88209,3218.25,84.32115);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1338[18] = {
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
   2687};
   Double_t Graph0_fy1338[18] = {
   -33.75266,
   -16.57891,
   -14.39853,
   -9.007975,
   -12.29303,
   -14.94729,
   -15.85083,
   -18.79302,
   -14.59534,
   -11.72144,
   -16.51518,
   -15.76762,
   -12.67167,
   -10.68085,
   -14.01125,
   -8.025701,
   -19.389,
   -11.66117};
   Double_t Graph0_fex1338[18] = {
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
   Double_t Graph0_fey1338[18] = {
   10.53675,
   6.347741,
   4.387112,
   3.611941,
   3.177368,
   2.860578,
   2.685341,
   2.542899,
   2.536046,
   2.457686,
   2.545043,
   2.56715,
   2.682491,
   2.720946,
   2.838361,
   3.057255,
   3.235916,
   3.481162};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1338,Graph0_fy1338,Graph0_fex1338,Graph0_fey1338);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01338 = new TH1F("Graph_Graph01338","S12S18",100,349.5,2899.5);
   Graph_Graph01338->SetMinimum(-55.36176);
   Graph_Graph01338->SetMaximum(68.80083);
   Graph_Graph01338->SetDirectory(0);
   Graph_Graph01338->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01338->SetLineColor(ci);
   Graph_Graph01338->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01338->GetXaxis()->CenterTitle(true);
   Graph_Graph01338->GetXaxis()->SetLabelFont(42);
   Graph_Graph01338->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01338->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01338->GetXaxis()->SetTitleFont(42);
   Graph_Graph01338->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01338->GetYaxis()->CenterTitle(true);
   Graph_Graph01338->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01338->GetYaxis()->SetLabelFont(42);
   Graph_Graph01338->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01338->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01338->GetYaxis()->SetTitleFont(42);
   Graph_Graph01338->GetZaxis()->SetLabelFont(42);
   Graph_Graph01338->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01338->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01338);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1339[18] = {
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
   2687};
   Double_t Graph1_fy1339[18] = {
   47.02038,
   33.40426,
   34.25776,
   31.70514,
   27.75471,
   27.88336,
   25.83794,
   20.71104,
   21.54084,
   13.91389,
   16.69126,
   15.97155,
   13.83963,
   10.02784,
   10.99705,
   7.169107,
   10.09416,
   3.043949};
   Double_t Graph1_fex1339[18] = {
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
   Double_t Graph1_fey1339[18] = {
   8.020279,
   4.762324,
   3.279796,
   2.692658,
   2.362913,
   2.123342,
   1.979355,
   1.870481,
   1.856896,
   1.803577,
   1.85653,
   1.872522,
   1.960931,
   1.980549,
   2.0587,
   2.228507,
   2.356154,
   2.569002};
   gre = new TGraphErrors(18,Graph1_fx1339,Graph1_fy1339,Graph1_fex1339,Graph1_fey1339);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11339 = new TH1F("Graph_Graph11339","Graph",100,349.5,2899.5);
   Graph_Graph11339->SetMinimum(0.427452);
   Graph_Graph11339->SetMaximum(60.49724);
   Graph_Graph11339->SetDirectory(0);
   Graph_Graph11339->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11339->SetLineColor(ci);
   Graph_Graph11339->GetXaxis()->SetLabelFont(42);
   Graph_Graph11339->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11339->GetXaxis()->SetTitleFont(42);
   Graph_Graph11339->GetYaxis()->SetLabelFont(42);
   Graph_Graph11339->GetYaxis()->SetTitleFont(42);
   Graph_Graph11339->GetZaxis()->SetLabelFont(42);
   Graph_Graph11339->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11339->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11339);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1340[18] = {
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
   2687};
   Double_t Graph2_fy1340[18] = {
   2.624066,
   -0.05354792,
   0.2244363,
   0.4666296,
   -0.3084825,
   -0.3092722,
   -0.4284951,
   -0.3299577,
   -0.1916141,
   -0.1069684,
   -0.03034718,
   0.02296634,
   -0.01574277,
   -0.003136347,
   0.04105057,
   -0.02978601,
   0.1064362,
   0.1040405};
   Double_t Graph2_fex1340[18] = {
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
   Double_t Graph2_fey1340[18] = {
   0.07186514,
   0.0436491,
   0.0302181,
   0.02497345,
   0.02201939,
   0.01989219,
   0.01873622,
   0.01778691,
   0.01777867,
   0.01724056,
   0.0179058,
   0.01811263,
   0.01894913,
   0.0192679,
   0.02012935,
   0.02169606,
   0.02287793,
   0.0245545};
   gre = new TGraphErrors(18,Graph2_fx1340,Graph2_fy1340,Graph2_fex1340,Graph2_fey1340);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21340 = new TH1F("Graph_Graph21340","Graph",100,349.5,2899.5);
   Graph_Graph21340->SetMinimum(-0.7615475);
   Graph_Graph21340->SetMaximum(3.010247);
   Graph_Graph21340->SetDirectory(0);
   Graph_Graph21340->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21340->SetLineColor(ci);
   Graph_Graph21340->GetXaxis()->SetLabelFont(42);
   Graph_Graph21340->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21340->GetXaxis()->SetTitleFont(42);
   Graph_Graph21340->GetYaxis()->SetLabelFont(42);
   Graph_Graph21340->GetYaxis()->SetTitleFont(42);
   Graph_Graph21340->GetZaxis()->SetLabelFont(42);
   Graph_Graph21340->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21340->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21340);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.625,0.75,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Data: Run-1b","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","A","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","B","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","c","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
