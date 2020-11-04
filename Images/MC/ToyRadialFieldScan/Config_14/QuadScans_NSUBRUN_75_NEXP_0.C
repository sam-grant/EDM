void QuadScans_NSUBRUN_75_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 10:31:17 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(13.21429,-3.25,20.07143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1025[3] = {
   14.3,
   16.3,
   18.3};
   Double_t -30.000000 ppm_fy1025[3] = {
   -1.871053,
   -1.627524,
   -1.432102};
   Double_t -30.000000 ppm_fex1025[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1025[3] = {
   0.01696128,
   0.01696128,
   0.01696128};
   TGraphErrors *gre = new TGraphErrors(3,-30.000000 ppm_fx1025,-30.000000 ppm_fy1025,-30.000000 ppm_fex1025,-30.000000 ppm_fey1025);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1025 = new TH1F("Graph_mI30dO000000sPppm1025","",100,13.9,18.7);
   Graph_mI30dO000000sPppm1025->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1025->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1025->SetDirectory(0);
   Graph_mI30dO000000sPppm1025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1025->SetLineColor(ci);
   Graph_mI30dO000000sPppm1025->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1025->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1025->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1025->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1025->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1025->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1025->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1025->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1025->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1025->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1025->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1025->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1025->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1025->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1025->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1025);
   
   
   TF1 *quadLineFit1026 = new TF1("quadLineFit","[0]+[1]*x",13.9,18.7, TF1::EAddToList::kNo);
   quadLineFit1026->SetFillColor(19);
   quadLineFit1026->SetFillStyle(0);
   quadLineFit1026->SetLineWidth(2);
   quadLineFit1026->SetChisquare(1.340723);
   quadLineFit1026->SetNDF(1);
   quadLineFit1026->GetXaxis()->SetLabelFont(42);
   quadLineFit1026->GetXaxis()->SetTitleOffset(1);
   quadLineFit1026->GetXaxis()->SetTitleFont(42);
   quadLineFit1026->GetYaxis()->SetLabelFont(42);
   quadLineFit1026->GetYaxis()->SetTitleFont(42);
   quadLineFit1026->SetParameter(0,-3.432287);
   quadLineFit1026->SetParError(0,0.09823568);
   quadLineFit1026->SetParLimits(0,0,0);
   quadLineFit1026->SetParameter(1,0.1097379);
   quadLineFit1026->SetParError(1,0.00599671);
   quadLineFit1026->SetParLimits(1,0,0);
   quadLineFit1026->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1026);
   gre->Draw("ap");
   
   TF1 *quadLineFit1027 = new TF1("quadLineFit","[0]+[1]*x",13.9,18.7, TF1::EAddToList::kNo);
   quadLineFit1027->SetFillColor(19);
   quadLineFit1027->SetFillStyle(0);
   quadLineFit1027->SetLineWidth(2);
   quadLineFit1027->SetChisquare(1.340723);
   quadLineFit1027->SetNDF(1);
   quadLineFit1027->GetXaxis()->SetLabelFont(42);
   quadLineFit1027->GetXaxis()->SetTitleOffset(1);
   quadLineFit1027->GetXaxis()->SetTitleFont(42);
   quadLineFit1027->GetYaxis()->SetLabelFont(42);
   quadLineFit1027->GetYaxis()->SetTitleFont(42);
   quadLineFit1027->SetParameter(0,-3.432287);
   quadLineFit1027->SetParError(0,0.09823568);
   quadLineFit1027->SetParLimits(0,0,0);
   quadLineFit1027->SetParameter(1,0.1097379);
   quadLineFit1027->SetParError(1,0.00599671);
   quadLineFit1027->SetParLimits(1,0,0);
   quadLineFit1027->Draw("same");
   
   Double_t -10.000000 ppm_fx1027[3] = {
   14.3,
   16.3,
   18.3};
   Double_t -10.000000 ppm_fy1027[3] = {
   -0.2029664,
   -0.1746988,
   -0.1271109};
   Double_t -10.000000 ppm_fex1027[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1027[3] = {
   0.01696128,
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1027,-10.000000 ppm_fy1027,-10.000000 ppm_fex1027,-10.000000 ppm_fey1027);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1027 = new TH1F("Graph_mI10dO000000sPppm1027","Graph",100,13.9,18.7);
   Graph_mI10dO000000sPppm1027->SetMinimum(-0.2309055);
   Graph_mI10dO000000sPppm1027->SetMaximum(-0.09917186);
   Graph_mI10dO000000sPppm1027->SetDirectory(0);
   Graph_mI10dO000000sPppm1027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1027->SetLineColor(ci);
   Graph_mI10dO000000sPppm1027->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1027->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1027->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1027->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1027->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1027->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1027->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1027);
   
   
   TF1 *quadLineFit1028 = new TF1("quadLineFit","[0]+[1]*x",13.9,18.7, TF1::EAddToList::kNo);
   quadLineFit1028->SetFillColor(19);
   quadLineFit1028->SetFillStyle(0);
   quadLineFit1028->SetLineColor(2);
   quadLineFit1028->SetLineWidth(2);
   quadLineFit1028->SetChisquare(0.2162499);
   quadLineFit1028->SetNDF(1);
   quadLineFit1028->GetXaxis()->SetLabelFont(42);
   quadLineFit1028->GetXaxis()->SetTitleOffset(1);
   quadLineFit1028->GetXaxis()->SetTitleFont(42);
   quadLineFit1028->GetYaxis()->SetLabelFont(42);
   quadLineFit1028->GetYaxis()->SetTitleFont(42);
   quadLineFit1028->SetParameter(0,-0.4773698);
   quadLineFit1028->SetParError(0,0.09823613);
   quadLineFit1028->SetParLimits(0,0,0);
   quadLineFit1028->SetParameter(1,0.01896387);
   quadLineFit1028->SetParError(1,0.005996738);
   quadLineFit1028->SetParLimits(1,0,0);
   quadLineFit1028->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1028);
   gre->Draw("p ");
   
   TF1 *quadLineFit1029 = new TF1("quadLineFit","[0]+[1]*x",13.9,18.7, TF1::EAddToList::kNo);
   quadLineFit1029->SetFillColor(19);
   quadLineFit1029->SetFillStyle(0);
   quadLineFit1029->SetLineColor(2);
   quadLineFit1029->SetLineWidth(2);
   quadLineFit1029->SetChisquare(0.2162499);
   quadLineFit1029->SetNDF(1);
   quadLineFit1029->GetXaxis()->SetLabelFont(42);
   quadLineFit1029->GetXaxis()->SetTitleOffset(1);
   quadLineFit1029->GetXaxis()->SetTitleFont(42);
   quadLineFit1029->GetYaxis()->SetLabelFont(42);
   quadLineFit1029->GetYaxis()->SetTitleFont(42);
   quadLineFit1029->SetParameter(0,-0.4773698);
   quadLineFit1029->SetParError(0,0.09823613);
   quadLineFit1029->SetParLimits(0,0,0);
   quadLineFit1029->SetParameter(1,0.01896387);
   quadLineFit1029->SetParError(1,0.005996738);
   quadLineFit1029->SetParLimits(1,0,0);
   quadLineFit1029->Draw("same");
   
   Double_t 10.000000 ppm_fx1029[3] = {
   14.3,
   16.3,
   18.3};
   Double_t 10.000000 ppm_fy1029[3] = {
   1.528862,
   1.349702,
   1.186838};
   Double_t 10.000000 ppm_fex1029[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1029[3] = {
   0.01696128,
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(3,10.000000 ppm_fx1029,10.000000 ppm_fy1029,10.000000 ppm_fex1029,10.000000 ppm_fey1029);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_10dO000000sPppm1029 = new TH1F("Graph_10dO000000sPppm1029","Graph",100,13.9,18.7);
   Graph_10dO000000sPppm1029->SetMinimum(1.132282);
   Graph_10dO000000sPppm1029->SetMaximum(1.583417);
   Graph_10dO000000sPppm1029->SetDirectory(0);
   Graph_10dO000000sPppm1029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1029->SetLineColor(ci);
   Graph_10dO000000sPppm1029->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1029->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1029->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1029->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1029->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1029->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1029->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1029);
   
   
   TF1 *quadLineFit1030 = new TF1("quadLineFit","[0]+[1]*x",13.9,18.7, TF1::EAddToList::kNo);
   quadLineFit1030->SetFillColor(19);
   quadLineFit1030->SetFillStyle(0);
   quadLineFit1030->SetLineColor(3);
   quadLineFit1030->SetLineWidth(2);
   quadLineFit1030->SetChisquare(0.1538559);
   quadLineFit1030->SetNDF(1);
   quadLineFit1030->GetXaxis()->SetLabelFont(42);
   quadLineFit1030->GetXaxis()->SetTitleOffset(1);
   quadLineFit1030->GetXaxis()->SetTitleFont(42);
   quadLineFit1030->GetYaxis()->SetLabelFont(42);
   quadLineFit1030->GetYaxis()->SetTitleFont(42);
   quadLineFit1030->SetParameter(0,2.748879);
   quadLineFit1030->SetParError(0,0.09823676);
   quadLineFit1030->SetParLimits(0,0,0);
   quadLineFit1030->SetParameter(1,-0.08550582);
   quadLineFit1030->SetParError(1,0.005996777);
   quadLineFit1030->SetParLimits(1,0,0);
   quadLineFit1030->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1030);
   gre->Draw("p ");
   
   TF1 *quadLineFit1031 = new TF1("quadLineFit","[0]+[1]*x",13.9,18.7, TF1::EAddToList::kNo);
   quadLineFit1031->SetFillColor(19);
   quadLineFit1031->SetFillStyle(0);
   quadLineFit1031->SetLineColor(3);
   quadLineFit1031->SetLineWidth(2);
   quadLineFit1031->SetChisquare(0.1538559);
   quadLineFit1031->SetNDF(1);
   quadLineFit1031->GetXaxis()->SetLabelFont(42);
   quadLineFit1031->GetXaxis()->SetTitleOffset(1);
   quadLineFit1031->GetXaxis()->SetTitleFont(42);
   quadLineFit1031->GetYaxis()->SetLabelFont(42);
   quadLineFit1031->GetYaxis()->SetTitleFont(42);
   quadLineFit1031->SetParameter(0,2.748879);
   quadLineFit1031->SetParError(0,0.09823676);
   quadLineFit1031->SetParLimits(0,0,0);
   quadLineFit1031->SetParameter(1,-0.08550582);
   quadLineFit1031->SetParError(1,0.005996777);
   quadLineFit1031->SetParLimits(1,0,0);
   quadLineFit1031->Draw("same");
   
   Double_t 30.000000 ppm_fx1031[3] = {
   14.3,
   16.3,
   18.3};
   Double_t 30.000000 ppm_fy1031[3] = {
   3.203506,
   2.837175,
   2.522613};
   Double_t 30.000000 ppm_fex1031[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1031[3] = {
   0.01696128,
   0.01696128,
   0.01696128};
   gre = new TGraphErrors(3,30.000000 ppm_fx1031,30.000000 ppm_fy1031,30.000000 ppm_fex1031,30.000000 ppm_fey1031);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_30dO000000sPppm1031 = new TH1F("Graph_30dO000000sPppm1031","Graph",100,13.9,18.7);
   Graph_30dO000000sPppm1031->SetMinimum(2.43417);
   Graph_30dO000000sPppm1031->SetMaximum(3.291949);
   Graph_30dO000000sPppm1031->SetDirectory(0);
   Graph_30dO000000sPppm1031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1031->SetLineColor(ci);
   Graph_30dO000000sPppm1031->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1031->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1031->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1031->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1031->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1031->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1031->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1031);
   
   
   TF1 *quadLineFit1032 = new TF1("quadLineFit","[0]+[1]*x",13.9,18.7, TF1::EAddToList::kNo);
   quadLineFit1032->SetFillColor(19);
   quadLineFit1032->SetFillStyle(0);
   quadLineFit1032->SetLineColor(4);
   quadLineFit1032->SetLineWidth(2);
   quadLineFit1032->SetChisquare(1.552623);
   quadLineFit1032->SetNDF(1);
   quadLineFit1032->GetXaxis()->SetLabelFont(42);
   quadLineFit1032->GetXaxis()->SetTitleOffset(1);
   quadLineFit1032->GetXaxis()->SetTitleFont(42);
   quadLineFit1032->GetYaxis()->SetLabelFont(42);
   quadLineFit1032->GetYaxis()->SetTitleFont(42);
   quadLineFit1032->SetParameter(0,5.629072);
   quadLineFit1032->SetParError(0,0.09823024);
   quadLineFit1032->SetParLimits(0,0,0);
   quadLineFit1032->SetParameter(1,-0.1702234);
   quadLineFit1032->SetParError(1,0.005996375);
   quadLineFit1032->SetParLimits(1,0,0);
   quadLineFit1032->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1032);
   gre->Draw("p ");
   
   TF1 *quadLineFit1033 = new TF1("quadLineFit","[0]+[1]*x",13.9,18.7, TF1::EAddToList::kNo);
   quadLineFit1033->SetFillColor(19);
   quadLineFit1033->SetFillStyle(0);
   quadLineFit1033->SetLineColor(4);
   quadLineFit1033->SetLineWidth(2);
   quadLineFit1033->SetChisquare(1.552623);
   quadLineFit1033->SetNDF(1);
   quadLineFit1033->GetXaxis()->SetLabelFont(42);
   quadLineFit1033->GetXaxis()->SetTitleOffset(1);
   quadLineFit1033->GetXaxis()->SetTitleFont(42);
   quadLineFit1033->GetYaxis()->SetLabelFont(42);
   quadLineFit1033->GetYaxis()->SetTitleFont(42);
   quadLineFit1033->SetParameter(0,5.629072);
   quadLineFit1033->SetParError(0,0.09823024);
   quadLineFit1033->SetParLimits(0,0,0);
   quadLineFit1033->SetParameter(1,-0.1702234);
   quadLineFit1033->SetParError(1,0.005996375);
   quadLineFit1033->SetParLimits(1,0,0);
   quadLineFit1033->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
