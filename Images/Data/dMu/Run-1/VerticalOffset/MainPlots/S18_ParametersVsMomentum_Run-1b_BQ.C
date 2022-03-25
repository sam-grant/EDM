void S18_ParametersVsMomentum_Run-1b_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 00:57:49 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-59.96273,3218.25,83.66683);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1031[18] = {
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
   Double_t Graph0_fy1031[18] = {
   -21.97924,
   4.086368,
   -3.953529,
   7.590605,
   -10.08738,
   -13.65914,
   -14.55525,
   -16.17089,
   -5.460573,
   -9.390401,
   -7.43799,
   -7.811452,
   -13.59571,
   -7.666765,
   -11.68177,
   -2.751168,
   -19.05877,
   -15.87696};
   Double_t Graph0_fex1031[18] = {
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
   Double_t Graph0_fey1031[18] = {
   14.50058,
   8.826451,
   6.206813,
   5.108464,
   4.509759,
   4.074323,
   3.849918,
   3.659675,
   3.649163,
   3.556808,
   3.709675,
   3.75363,
   3.956504,
   4.0146,
   4.179008,
   4.528408,
   4.754412,
   5.128399};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1031,Graph0_fy1031,Graph0_fex1031,Graph0_fey1031);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01031 = new TH1F("Graph_Graph01031","S18",100,349.5,2899.5);
   Graph_Graph01031->SetMinimum(-45.59977);
   Graph_Graph01031->SetMaximum(69.30388);
   Graph_Graph01031->SetDirectory(0);
   Graph_Graph01031->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01031->SetLineColor(ci);
   Graph_Graph01031->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01031->GetXaxis()->CenterTitle(true);
   Graph_Graph01031->GetXaxis()->SetLabelFont(42);
   Graph_Graph01031->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01031->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01031->GetXaxis()->SetTitleFont(42);
   Graph_Graph01031->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01031->GetYaxis()->CenterTitle(true);
   Graph_Graph01031->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01031->GetYaxis()->SetLabelFont(42);
   Graph_Graph01031->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01031->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01031->GetYaxis()->SetTitleFont(42);
   Graph_Graph01031->GetZaxis()->SetLabelFont(42);
   Graph_Graph01031->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01031);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1032[18] = {
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
   Double_t Graph1_fy1032[18] = {
   44.58006,
   16.39561,
   26.26163,
   24.91396,
   24.21395,
   24.95537,
   25.16079,
   17.80999,
   20.82701,
   14.06627,
   13.46314,
   13.97342,
   14.6379,
   10.91133,
   9.844285,
   5.274903,
   11.12592,
   4.732181};
   Double_t Graph1_fex1032[18] = {
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
   Double_t Graph1_fey1032[18] = {
   10.86304,
   6.540204,
   4.596649,
   3.781483,
   3.332906,
   3.011904,
   2.828814,
   2.681187,
   2.665547,
   2.609556,
   2.704072,
   2.734212,
   2.869019,
   2.912481,
   3.029522,
   3.29105,
   3.435514,
   3.736792};
   gre = new TGraphErrors(18,Graph1_fx1032,Graph1_fy1032,Graph1_fex1032,Graph1_fey1032);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11032 = new TH1F("Graph_Graph11032","Graph",100,349.5,2899.5);
   Graph_Graph11032->SetMinimum(0.8958498);
   Graph_Graph11032->SetMaximum(60.88787);
   Graph_Graph11032->SetDirectory(0);
   Graph_Graph11032->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11032->SetLineColor(ci);
   Graph_Graph11032->GetXaxis()->SetLabelFont(42);
   Graph_Graph11032->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11032->GetXaxis()->SetTitleFont(42);
   Graph_Graph11032->GetYaxis()->SetLabelFont(42);
   Graph_Graph11032->GetYaxis()->SetTitleFont(42);
   Graph_Graph11032->GetZaxis()->SetLabelFont(42);
   Graph_Graph11032->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11032);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1033[18] = {
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
   Double_t Graph2_fy1033[18] = {
   2.501997,
   -0.2054896,
   0.1190655,
   0.2634929,
   -0.3916806,
   -0.3438065,
   -0.4209571,
   -0.2894025,
   -0.2707288,
   -0.1751652,
   -0.1093814,
   -0.07810504,
   -0.02078261,
   -0.005457446,
   0.01007394,
   -0.1087431,
   0.0550715,
   0.05285043};
   Double_t Graph2_fex1033[18] = {
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
   Double_t Graph2_fey1033[18] = {
   0.09954315,
   0.06070403,
   0.04276608,
   0.03523577,
   0.03121583,
   0.02825255,
   0.02674688,
   0.0255079,
   0.02545612,
   0.02477205,
   0.02590683,
   0.02631753,
   0.02777791,
   0.02830544,
   0.02936304,
   0.0318991,
   0.03344387,
   0.03588266};
   gre = new TGraphErrors(18,Graph2_fx1033,Graph2_fy1033,Graph2_fex1033,Graph2_fey1033);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21033 = new TH1F("Graph_Graph21033","Graph",100,349.5,2899.5);
   Graph_Graph21033->SetMinimum(-0.7526284);
   Graph_Graph21033->SetMaximum(2.906465);
   Graph_Graph21033->SetDirectory(0);
   Graph_Graph21033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21033->SetLineColor(ci);
   Graph_Graph21033->GetXaxis()->SetLabelFont(42);
   Graph_Graph21033->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21033->GetXaxis()->SetTitleFont(42);
   Graph_Graph21033->GetYaxis()->SetLabelFont(42);
   Graph_Graph21033->GetYaxis()->SetTitleFont(42);
   Graph_Graph21033->GetZaxis()->SetLabelFont(42);
   Graph_Graph21033->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21033);
   
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
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
