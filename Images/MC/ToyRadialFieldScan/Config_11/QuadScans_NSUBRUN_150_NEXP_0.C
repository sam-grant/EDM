void QuadScans_NSUBRUN_150_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:56:24 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1041[3] = {
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1041[3] = {
   -3.169148,
   -2.812783,
   -2.529757};
   Double_t -50.000000 ppm_fex1041[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1041[3] = {
   0.0120478,
   0.0120478,
   0.0120478};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1041,-50.000000 ppm_fy1041,-50.000000 ppm_fex1041,-50.000000 ppm_fey1041);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1041 = new TH1F("Graph_mI50dO000000sPppm1041","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1041->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1041->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1041->SetDirectory(0);
   Graph_mI50dO000000sPppm1041->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1041->SetLineColor(ci);
   Graph_mI50dO000000sPppm1041->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1041->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1041->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1041->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1041->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1041->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1041->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1041->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1041->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1041->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1041->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1041->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1041->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1041->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1041->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1041);
   
   
   TF1 *quadLineFit1042 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1042->SetFillColor(19);
   quadLineFit1042->SetFillStyle(0);
   quadLineFit1042->SetLineWidth(2);
   quadLineFit1042->SetChisquare(6.176135);
   quadLineFit1042->SetNDF(1);
   quadLineFit1042->GetXaxis()->SetLabelFont(42);
   quadLineFit1042->GetXaxis()->SetTitleOffset(1);
   quadLineFit1042->GetXaxis()->SetTitleFont(42);
   quadLineFit1042->GetYaxis()->SetLabelFont(42);
   quadLineFit1042->GetYaxis()->SetTitleFont(42);
   quadLineFit1042->SetParameter(0,-5.714489);
   quadLineFit1042->SetParError(0,0.07698641);
   quadLineFit1042->SetParLimits(0,0,0);
   quadLineFit1042->SetParameter(1,0.1598478);
   quadLineFit1042->SetParError(1,0.00425953);
   quadLineFit1042->SetParLimits(1,0,0);
   quadLineFit1042->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1042);
   gre->Draw("ap");
   
   TF1 *quadLineFit1043 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1043->SetFillColor(19);
   quadLineFit1043->SetFillStyle(0);
   quadLineFit1043->SetLineWidth(2);
   quadLineFit1043->SetChisquare(6.176135);
   quadLineFit1043->SetNDF(1);
   quadLineFit1043->GetXaxis()->SetLabelFont(42);
   quadLineFit1043->GetXaxis()->SetTitleOffset(1);
   quadLineFit1043->GetXaxis()->SetTitleFont(42);
   quadLineFit1043->GetYaxis()->SetLabelFont(42);
   quadLineFit1043->GetYaxis()->SetTitleFont(42);
   quadLineFit1043->SetParameter(0,-5.714489);
   quadLineFit1043->SetParError(0,0.07698641);
   quadLineFit1043->SetParLimits(0,0,0);
   quadLineFit1043->SetParameter(1,0.1598478);
   quadLineFit1043->SetParError(1,0.00425953);
   quadLineFit1043->SetParLimits(1,0,0);
   quadLineFit1043->Draw("same");
   
   Double_t 50.000000 ppm_fx1043[3] = {
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1043[3] = {
   4.368512,
   3.897268,
   3.499414};
   Double_t 50.000000 ppm_fex1043[3] = {
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1043[3] = {
   0.0120478,
   0.0120478,
   0.0120478};
   gre = new TGraphErrors(3,50.000000 ppm_fx1043,50.000000 ppm_fy1043,50.000000 ppm_fex1043,50.000000 ppm_fey1043);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_50dO000000sPppm1043 = new TH1F("Graph_50dO000000sPppm1043","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1043->SetMinimum(3.398046);
   Graph_50dO000000sPppm1043->SetMaximum(4.469879);
   Graph_50dO000000sPppm1043->SetDirectory(0);
   Graph_50dO000000sPppm1043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1043->SetLineColor(ci);
   Graph_50dO000000sPppm1043->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1043->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1043->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1043->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1043->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1043->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1043->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1043);
   
   
   TF1 *quadLineFit1044 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1044->SetFillColor(19);
   quadLineFit1044->SetFillStyle(0);
   quadLineFit1044->SetLineColor(2);
   quadLineFit1044->SetLineWidth(2);
   quadLineFit1044->SetChisquare(6.184504);
   quadLineFit1044->SetNDF(1);
   quadLineFit1044->GetXaxis()->SetLabelFont(42);
   quadLineFit1044->GetXaxis()->SetTitleOffset(1);
   quadLineFit1044->GetXaxis()->SetTitleFont(42);
   quadLineFit1044->GetYaxis()->SetLabelFont(42);
   quadLineFit1044->GetYaxis()->SetTitleFont(42);
   quadLineFit1044->SetParameter(0,7.832672);
   quadLineFit1044->SetParError(0,0.0769805);
   quadLineFit1044->SetParLimits(0,0,0);
   quadLineFit1044->SetParameter(1,-0.2172745);
   quadLineFit1044->SetParError(1,0.004259203);
   quadLineFit1044->SetParLimits(1,0,0);
   quadLineFit1044->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1044);
   gre->Draw("p ");
   
   TF1 *quadLineFit1045 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1045->SetFillColor(19);
   quadLineFit1045->SetFillStyle(0);
   quadLineFit1045->SetLineColor(2);
   quadLineFit1045->SetLineWidth(2);
   quadLineFit1045->SetChisquare(6.184504);
   quadLineFit1045->SetNDF(1);
   quadLineFit1045->GetXaxis()->SetLabelFont(42);
   quadLineFit1045->GetXaxis()->SetTitleOffset(1);
   quadLineFit1045->GetXaxis()->SetTitleFont(42);
   quadLineFit1045->GetYaxis()->SetLabelFont(42);
   quadLineFit1045->GetYaxis()->SetTitleFont(42);
   quadLineFit1045->SetParameter(0,7.832672);
   quadLineFit1045->SetParError(0,0.0769805);
   quadLineFit1045->SetParLimits(0,0,0);
   quadLineFit1045->SetParameter(1,-0.2172745);
   quadLineFit1045->SetParError(1,0.004259203);
   quadLineFit1045->SetParLimits(1,0,0);
   quadLineFit1045->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("50.000000 ppm","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-50.000000 ppm","  #minus50 ppm","lpf");
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
