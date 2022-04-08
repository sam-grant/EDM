void verticalOffsetSlopeSim_S12()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 21:29:24 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-0.625,0.0001725,1.625,0.0003475);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1[2] = {
   -0.25,
   1.25};
   Double_t _fy1[2] = {
   0,
   0};
   TGraph *graph = new TGraph(2,_fx1,_fy1);
   graph->SetName("");
   graph->SetTitle(";Tracker alignment vertical offset [mm];#LT#theta_{y}#GT/p [mrad/MeV]");
   graph->SetFillStyle(1000);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,-0.4,1.4);
   Graph_Graph1->SetMinimum(0.00019);
   Graph_Graph1->SetMaximum(0.00033);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("Tracker alignment vertical offset [mm]");
   Graph_Graph1->GetXaxis()->CenterTitle(true);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("#LT#theta_{y}#GT/p [mrad/MeV]");
   Graph_Graph1->GetYaxis()->CenterTitle(true);
   Graph_Graph1->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("ap");
   
   Double_t _fx1009[2] = {
   0,
   1};
   Double_t _fy1009[2] = {
   0.0002328066,
   0.0002421595};
   Double_t _fex1009[2] = {
   0,
   0};
   Double_t _fey1009[2] = {
   1.670467e-05,
   1.683058e-05};
   TGraphErrors *gre = new TGraphErrors(2,_fx1009,_fy1009,_fex1009,_fey1009);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","",100,0,1.1);
   Graph_Graph1009->SetMinimum(0.0002118131);
   Graph_Graph1009->SetMaximum(0.0002632789);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetRange(0,101);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
   
   TF1 *fit1010 = new TF1("fit","[0]+[1]*x",0,1, TF1::EAddToList::kNo);
   fit1010->SetFillColor(19);
   fit1010->SetFillStyle(0);
   fit1010->SetLineColor(2);
   fit1010->SetLineWidth(2);
   fit1010->SetChisquare(2.575706e-17);
   fit1010->SetNDF(0);
   fit1010->GetXaxis()->SetLabelFont(42);
   fit1010->GetXaxis()->SetTitleOffset(1);
   fit1010->GetXaxis()->SetTitleFont(42);
   fit1010->GetYaxis()->SetLabelFont(42);
   fit1010->GetYaxis()->SetTitleFont(42);
   fit1010->SetParameter(0,0.0002328066);
   fit1010->SetParError(0,1.670467e-05);
   fit1010->SetParLimits(0,0,0);
   fit1010->SetParameter(1,9.352986e-06);
   fit1010->SetParError(1,2.371317e-05);
   fit1010->SetParLimits(1,0,0);
   fit1010->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1010);
   gre->Draw("p ");
   
   TPaveText *pt = new TPaveText(0.11,0.75,0.65,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("Gradient [rad#upointMeV^{-1}#upointm^{-1}]");
   pt_LaTex = pt->AddText("Y-intercept [mrad#upointMeV^{-1}]");
   pt->Draw();
   
   pt = new TPaveText(0.7,0.74,0.75,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("0.00023
#pm2e-05
");
   pt_LaTex = pt->AddText("9.35e-06
#pm2.37e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
