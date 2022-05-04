void S12S18_SamsSanityPlot()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  4 12:58:04 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(499.748,0.08755484,2740.76,0.4081034);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1014[7] = {
   873.25,
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258};
   Double_t _fy1014[7] = {
   0.3546786,
   0.3517685,
   0.3028264,
   0.2618274,
   0.321991,
   0.1409796,
   0.2194615};
   Double_t _fex1014[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1014[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(7,_fx1014,_fy1014,_fex1014,_fey1014);
   gre->SetName("");
   gre->SetTitle("Hell");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1014 = new TH1F("Graph_Graph1014","Hell",100,723.8492,2516.659);
   Graph_Graph1014->SetMinimum(0.1196097);
   Graph_Graph1014->SetMaximum(0.3760486);
   Graph_Graph1014->SetDirectory(0);
   Graph_Graph1014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1014->SetLineColor(ci);
   Graph_Graph1014->GetXaxis()->CenterTitle(true);
   Graph_Graph1014->GetXaxis()->SetLabelFont(42);
   Graph_Graph1014->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1014->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1014->GetXaxis()->SetTitleFont(42);
   Graph_Graph1014->GetYaxis()->CenterTitle(true);
   Graph_Graph1014->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1014->GetYaxis()->SetLabelFont(42);
   Graph_Graph1014->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1014->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1014->GetYaxis()->SetTitleFont(42);
   Graph_Graph1014->GetZaxis()->SetLabelFont(42);
   Graph_Graph1014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1014);
   
   gre->Draw("apl");
   
   TPaveText *pt = new TPaveText(0.4573367,0.94,0.5426633,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Hell");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
