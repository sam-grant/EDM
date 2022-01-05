void h1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 20 16:20:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",1120,480,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1__1 = new TH1D("h1__1","",100,-1e-18,1e-18);
   h1__1->SetBinContent(27,1);
   h1__1->SetBinContent(34,1);
   h1__1->SetBinContent(35,3);
   h1__1->SetBinContent(36,2);
   h1__1->SetBinContent(37,2);
   h1__1->SetBinContent(38,4);
   h1__1->SetBinContent(39,5);
   h1__1->SetBinContent(40,9);
   h1__1->SetBinContent(41,12);
   h1__1->SetBinContent(42,22);
   h1__1->SetBinContent(43,28);
   h1__1->SetBinContent(44,42);
   h1__1->SetBinContent(45,36);
   h1__1->SetBinContent(46,55);
   h1__1->SetBinContent(47,52);
   h1__1->SetBinContent(48,77);
   h1__1->SetBinContent(49,86);
   h1__1->SetBinContent(50,63);
   h1__1->SetBinContent(51,78);
   h1__1->SetBinContent(52,69);
   h1__1->SetBinContent(53,72);
   h1__1->SetBinContent(54,60);
   h1__1->SetBinContent(55,50);
   h1__1->SetBinContent(56,38);
   h1__1->SetBinContent(57,35);
   h1__1->SetBinContent(58,28);
   h1__1->SetBinContent(59,20);
   h1__1->SetBinContent(60,22);
   h1__1->SetBinContent(61,10);
   h1__1->SetBinContent(62,5);
   h1__1->SetBinContent(63,7);
   h1__1->SetBinContent(64,2);
   h1__1->SetBinContent(65,1);
   h1__1->SetBinContent(66,2);
   h1__1->SetBinContent(70,1);
   h1__1->SetEntries(1000);
   h1__1->GetXaxis()->SetTitle("d_{#mu} [e#upointcm]");
   h1__1->GetXaxis()->CenterTitle(true);
   h1__1->GetXaxis()->SetLabelFont(42);
   h1__1->GetXaxis()->SetTitleSize(0.04);
   h1__1->GetXaxis()->SetTitleOffset(1.1);
   h1__1->GetXaxis()->SetTitleFont(42);
   h1__1->GetYaxis()->SetTitle("Trials");
   h1__1->GetYaxis()->CenterTitle(true);
   h1__1->GetYaxis()->SetNdivisions(4000510);
   h1__1->GetYaxis()->SetLabelFont(42);
   h1__1->GetYaxis()->SetTitleSize(0.04);
   h1__1->GetYaxis()->SetTitleOffset(1.1);
   h1__1->GetYaxis()->SetTitleFont(42);
   h1__1->GetZaxis()->SetLabelFont(42);
   h1__1->GetZaxis()->SetTitleOffset(1);
   h1__1->GetZaxis()->SetTitleFont(42);
   h1__1->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
